// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstacleSpawner.h"
#include "Kismet/KismetMathLibrary.h" 
#include "Engine/World.h"     // Required for GetWorld()
#include "CollisionQueryParams.h"

// Sets default values
AObstacleSpawner::AObstacleSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

}

// Called when the game starts or when spawned
void AObstacleSpawner::BeginPlay()
{
	Super::BeginPlay();
	//StartSpawningTimer();
	SpawnAllObstaclesAtOnce();
	
}

bool AObstacleSpawner::IsLocationClear(const FVector& Location) const
{
	// Iterate over all obstacles we are currently tracking
	for (AActor* Obstacle : SpawnedObstacles)
	{
		if (IsValid(Obstacle))
		{
			// Calculate the distance between the proposed spawn location and the existing obstacle
			float Distance = FVector::Dist(Location, Obstacle->GetActorLocation());

			// If the distance is less than the required minimum, the location is NOT clear
			if (Distance < MinimumClearanceDistance)
			{
				return false;
			}
		}
	}
    
	// If we checked all obstacles and didn't find any too close, the location is clear
	return true;
}

void AObstacleSpawner::SpawnAllObstaclesAtOnce()
{
	// IMPORTANT: Check if this Actor instance has network authority (is the server).
	if (!HasAuthority())
	{
		return;
	}

	// Spawn the requested number of obstacles
	for (int32 i = 0; i < MaxConcurrentObstacles; ++i)
	{
		// SpawnObstacle will handle the class check, spawning, and tracking.
		SpawnObstacle();
	}
}

// Removed: StartSpawningTimer() implementation

void AObstacleSpawner::EndSpawningAndClearObstacles()
{
	// IMPORTANT: Ensure only the Server executes game logic that affects replication or timers.
	if (HasAuthority())
	{
		// 1. No timer to clear.

		// 2. Despawn/Destroy Actors (Obstacles)
		for (AActor* Obstacle : SpawnedObstacles)
		{
			// Calling Destroy() on the server will automatically replicate the destruction 
			// to all connected clients.
			if (IsValid(Obstacle))
			{
				Obstacle->Destroy();
			}
		}

		// 3. Clear the tracking array
		SpawnedObstacles.Empty();
	}
}

// Removed: ConfigureSpawner() implementation

void AObstacleSpawner::SpawnObstacle() 
{
	// 1. Authorization Check: Only execute on the server
	if (!HasAuthority() || !ObstacleToSpawnClass)
	{
		return;
	}
	
	// --- 3. Determine and Validate Spawn Location (Updated Logic) ---
    
    FVector Origin = GetActorLocation();
    FVector SpawnLocation = FVector::ZeroVector;
    
    const int32 MaxSpawnAttempts = 10; // Prevent infinite loops
    int32 CurrentAttempt = 0;
    bool bLocationFound = false;

    while (CurrentAttempt < MaxSpawnAttempts && !bLocationFound)
    {
        // 3a. Find Random XY Location (similar to previous step)
        FVector RandomXYOffset = FMath::VRand() * FMath::FRand() * SpawnRadius;
        FVector TraceStart = Origin + RandomXYOffset.GetSafeNormal() * (FMath::FRand() * SpawnRadius); 
        TraceStart.Z = Origin.Z + 2000.0f; // Start high for the trace
        
        FVector TraceEnd = TraceStart;
        TraceEnd.Z -= 4000.0f; 
        
        FHitResult HitResult;
        FCollisionQueryParams CollisionParams;
        CollisionParams.AddIgnoredActor(this); 
        
        // 3b. Perform Line Trace to find ground level
        if (GetWorld()->LineTraceSingleByChannel(
            HitResult,
            TraceStart,
            TraceEnd,
            ECollisionChannel::ECC_Visibility,
            CollisionParams
        ))
        {
            FVector GroundLocation = HitResult.Location + FVector(0.0f, 0.0f, 50.0f);
            
            // 3c. Check if this ground location is clear of other obstacles
            if (IsLocationClear(GroundLocation))
            {
                SpawnLocation = GroundLocation;
                bLocationFound = true;
                break; // Exit the loop as a valid location was found
            }
        }
        
        CurrentAttempt++;
    }

    // Check if a valid, non-overlapping location was successfully found
    if (!bLocationFound)
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to find a clear spawn location after %d attempts. Skipping spawn."), MaxSpawnAttempts);
        return; // Skip spawning this obstacle
    }

	// 4. Spawn the Obstacle
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn; 
	
	AActor* NewObstacle = GetWorld()->SpawnActor<AActor>( 
		ObstacleToSpawnClass,
		SpawnLocation, // Use the validated SpawnLocation
		FRotator::ZeroRotator,
		SpawnParams
	);

	if (NewObstacle)
	{
		SpawnedObstacles.Add(NewObstacle);
	}
}

// Called every frame
void AObstacleSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

