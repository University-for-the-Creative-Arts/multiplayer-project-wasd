// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerProjectCharacter.h"

#ifdef MULTIPLAYERPROJECT_MultiplayerProjectCharacter_generated_h
#error "MultiplayerProjectCharacter.generated.h already included, missing '#pragma once' in MultiplayerProjectCharacter.h"
#endif
#define MULTIPLAYERPROJECT_MultiplayerProjectCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMultiplayerProjectCharacter *********************************************
#define FID_Users_2106125_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_MultiplayerProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


MULTIPLAYERPROJECT_API UClass* Z_Construct_UClass_AMultiplayerProjectCharacter_NoRegister();

#define FID_Users_2106125_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_MultiplayerProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerProjectCharacter(); \
	friend struct Z_Construct_UClass_AMultiplayerProjectCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTIPLAYERPROJECT_API UClass* Z_Construct_UClass_AMultiplayerProjectCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AMultiplayerProjectCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerProject"), Z_Construct_UClass_AMultiplayerProjectCharacter_NoRegister) \
	DECLARE_SERIALIZER(AMultiplayerProjectCharacter)


#define FID_Users_2106125_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_MultiplayerProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMultiplayerProjectCharacter(AMultiplayerProjectCharacter&&) = delete; \
	AMultiplayerProjectCharacter(const AMultiplayerProjectCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerProjectCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerProjectCharacter) \
	NO_API virtual ~AMultiplayerProjectCharacter();


#define FID_Users_2106125_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_MultiplayerProjectCharacter_h_21_PROLOG
#define FID_Users_2106125_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_MultiplayerProjectCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2106125_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_MultiplayerProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2106125_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_MultiplayerProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_2106125_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_MultiplayerProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMultiplayerProjectCharacter;

// ********** End Class AMultiplayerProjectCharacter ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2106125_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_MultiplayerProjectCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
