// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameStateTimer.h"

#ifdef MULTIPLAYERPROJECT_GameStateTimer_generated_h
#error "GameStateTimer.generated.h already included, missing '#pragma once' in GameStateTimer.h"
#endif
#define MULTIPLAYERPROJECT_GameStateTimer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGameStateTimer **********************************************************
#define FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_GameStateTimer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateTimer); \
	DECLARE_FUNCTION(execOnRoundEnded); \
	DECLARE_FUNCTION(execStartRoundTimer);


MULTIPLAYERPROJECT_API UClass* Z_Construct_UClass_AGameStateTimer_NoRegister();

#define FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_GameStateTimer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameStateTimer(); \
	friend struct Z_Construct_UClass_AGameStateTimer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTIPLAYERPROJECT_API UClass* Z_Construct_UClass_AGameStateTimer_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameStateTimer, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerProject"), Z_Construct_UClass_AGameStateTimer_NoRegister) \
	DECLARE_SERIALIZER(AGameStateTimer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RoundTimeRemaining=NETFIELD_REP_START, \
		bRoundActive, \
		NETFIELD_REP_END=bRoundActive	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_GameStateTimer_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameStateTimer(AGameStateTimer&&) = delete; \
	AGameStateTimer(const AGameStateTimer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameStateTimer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameStateTimer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameStateTimer) \
	NO_API virtual ~AGameStateTimer();


#define FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_GameStateTimer_h_12_PROLOG
#define FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_GameStateTimer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_GameStateTimer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_GameStateTimer_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_GameStateTimer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameStateTimer;

// ********** End Class AGameStateTimer ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_GameStateTimer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
