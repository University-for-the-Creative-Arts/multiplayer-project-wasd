// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObstacleSpawner.h"

#ifdef MULTIPLAYERPROJECT_ObstacleSpawner_generated_h
#error "ObstacleSpawner.generated.h already included, missing '#pragma once' in ObstacleSpawner.h"
#endif
#define MULTIPLAYERPROJECT_ObstacleSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AObstacleSpawner *********************************************************
#define FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_ObstacleSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndSpawningAndClearObstacles); \
	DECLARE_FUNCTION(execSpawnAllObstaclesAtOnce); \
	DECLARE_FUNCTION(execSpawnObstacle);


MULTIPLAYERPROJECT_API UClass* Z_Construct_UClass_AObstacleSpawner_NoRegister();

#define FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_ObstacleSpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstacleSpawner(); \
	friend struct Z_Construct_UClass_AObstacleSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTIPLAYERPROJECT_API UClass* Z_Construct_UClass_AObstacleSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(AObstacleSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerProject"), Z_Construct_UClass_AObstacleSpawner_NoRegister) \
	DECLARE_SERIALIZER(AObstacleSpawner)


#define FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_ObstacleSpawner_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AObstacleSpawner(AObstacleSpawner&&) = delete; \
	AObstacleSpawner(const AObstacleSpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacleSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacleSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObstacleSpawner) \
	NO_API virtual ~AObstacleSpawner();


#define FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_ObstacleSpawner_h_9_PROLOG
#define FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_ObstacleSpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_ObstacleSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_ObstacleSpawner_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_ObstacleSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AObstacleSpawner;

// ********** End Class AObstacleSpawner ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Public_ObstacleSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
