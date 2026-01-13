// Fill out your copyright notice in the Description page of Project Settings.


#include "GameStateTimer.h"
#include "Net/UnrealNetwork.h"
#include "TimerManager.h"

AGameStateTimer::AGameStateTimer()
{
	RoundTimeRemaining = 0.0f;
	bRoundActive = false;
}

void AGameStateTimer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
	DOREPLIFETIME(AGameStateTimer, RoundTimeRemaining);
	DOREPLIFETIME(AGameStateTimer, bRoundActive);
}

void AGameStateTimer::StartRoundTimer(float Duration)
{
	if (HasAuthority()) // Only run on server
	{
		RoundTimeRemaining = Duration;
		bRoundActive = true;
        
		// Update timer every 0.1 seconds
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AGameStateTimer::UpdateTimer, 0.1f, true);
        
		UE_LOG(LogTemp, Log, TEXT("Round timer started: %.1f seconds"), Duration);
	}
}

void AGameStateTimer::UpdateTimer()
{
	if (HasAuthority())
	{
		RoundTimeRemaining -= 0.1f;
        
		if (RoundTimeRemaining <= 0.0f)
		{
			RoundTimeRemaining = 0.0f;
			bRoundActive = false;
			GetWorldTimerManager().ClearTimer(TimerHandle);
            
			UE_LOG(LogTemp, Warning, TEXT("Round ended!"));
			OnRoundEnded();
		}
	}
}

void AGameStateTimer::OnRoundEnded()
{
	// Add your round end logic here
	// For now, just log it
	UE_LOG(LogTemp, Warning, TEXT("OnRoundEnded called"));
    
	// You can add Blueprint events here later with:
	// UFUNCTION(BlueprintImplementableEvent)
	// Or handle winner determination, score updates, etc.
}
