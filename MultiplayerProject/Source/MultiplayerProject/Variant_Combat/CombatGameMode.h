// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "CombatGameMode.generated.h"

/**
 *  Simple GameMode for a third person combat game
 */
UCLASS(abstract)
class ACombatGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:

	ACombatGameMode();

protected:
	virtual void BeginPlay() override;
};
