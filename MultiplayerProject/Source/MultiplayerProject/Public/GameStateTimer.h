// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "GameStateTimer.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERPROJECT_API AGameStateTimer : public AGameState
{
	GENERATED_BODY()
	
public:
	AGameStateTimer();

	// Replicated timer properties
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Round")
	float RoundTimeRemaining;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Round")
	bool bRoundActive;

	// Start the round timer
	UFUNCTION(BlueprintCallable, Category = "Round")
	void StartRoundTimer(float Duration);

	// Called when round ends
	UFUNCTION(BlueprintCallable, Category = "Round")
	void OnRoundEnded();

protected:
	// Timer handle for updating the countdown
	FTimerHandle TimerHandle;

	// Updates the timer (server only)
	UFUNCTION()
	void UpdateTimer();

	// Setup replication
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
};


