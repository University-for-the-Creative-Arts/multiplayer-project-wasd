// Copyright Epic Games, Inc. All Rights Reserved.


#include "Variant_Combat/CombatGameMode.h"
#include "GameStateTimer.h"

ACombatGameMode::ACombatGameMode()
{

}

void ACombatGameMode::BeginPlay()
{
	Super::BeginPlay();
    
	// Start the timer when the game begins (server only)
	if (HasAuthority())
	{
		if (AGameStateTimer* GS = GetGameState<AGameStateTimer>())
		{
			GS->StartRoundTimer(60.0f); // 60 second timer
			UE_LOG(LogTemp, Log, TEXT("Game started - Timer set to 60 seconds"));
		}
	}
}