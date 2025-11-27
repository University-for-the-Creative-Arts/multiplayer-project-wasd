// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObstacleSpawner.generated.h"

UCLASS()
class MULTIPLAYERPROJECT_API AObstacleSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObstacleSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning")
	TSubclassOf<AActor> ObstacleToSpawnClass;
	
	UPROPERTY(EditAnywhere, Category = "Spawning", Meta = (ClampMin = "0.5"))
	float SpawnRate = 5.0f;

	UPROPERTY(EditAnywhere, Category = "Spawning", Meta = (ClampMin = "100.0"))
	float SpawnRadius = 500.0f;

	UPROPERTY(EditAnywhere, Category = "Spawning", Meta = (ClampMin = "50.0"))
	float MinimumClearanceDistance = 200.0f;

	UPROPERTY(EditAnywhere, Category = "Spawning", Meta = (ClampMin = "1"))
	int MaxConcurrentObstacles = 10; 

	//FTimerHandle SpawnTimerHandle;
	
	UPROPERTY(VisibleAnywhere, Transient, Category = "Spawning")
	TArray<AActor*> SpawnedObstacles;

	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void SpawnObstacle();

	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void SpawnAllObstaclesAtOnce();

	bool IsLocationClear(const FVector& Location) const;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void EndSpawningAndClearObstacles();

};
