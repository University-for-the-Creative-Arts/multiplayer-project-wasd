// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Combat/CombatCharacter.h"

#ifdef MULTIPLAYERPROJECT_CombatCharacter_generated_h
#error "CombatCharacter.generated.h already included, missing '#pragma once' in CombatCharacter.h"
#endif
#define MULTIPLAYERPROJECT_CombatCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACombatCharacter *********************************************************
#define FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Variant_Combat_CombatCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_CurrentHP); \
	DECLARE_FUNCTION(execDoChargedAttackEnd); \
	DECLARE_FUNCTION(execDoChargedAttackStart); \
	DECLARE_FUNCTION(execDoComboAttackEnd); \
	DECLARE_FUNCTION(execDoComboAttackStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


#define FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Variant_Combat_CombatCharacter_h_32_CALLBACK_WRAPPERS
MULTIPLAYERPROJECT_API UClass* Z_Construct_UClass_ACombatCharacter_NoRegister();

#define FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Variant_Combat_CombatCharacter_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatCharacter(); \
	friend struct Z_Construct_UClass_ACombatCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTIPLAYERPROJECT_API UClass* Z_Construct_UClass_ACombatCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ACombatCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerProject"), Z_Construct_UClass_ACombatCharacter_NoRegister) \
	DECLARE_SERIALIZER(ACombatCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ACombatCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHP=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHP	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Variant_Combat_CombatCharacter_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACombatCharacter(ACombatCharacter&&) = delete; \
	ACombatCharacter(const ACombatCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACombatCharacter) \
	NO_API virtual ~ACombatCharacter();


#define FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Variant_Combat_CombatCharacter_h_29_PROLOG
#define FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Variant_Combat_CombatCharacter_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Variant_Combat_CombatCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Variant_Combat_CombatCharacter_h_32_CALLBACK_WRAPPERS \
	FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Variant_Combat_CombatCharacter_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Variant_Combat_CombatCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACombatCharacter;

// ********** End Class ACombatCharacter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2304613_Documents_GitHub_multiplayer_project_wasd_MultiplayerProject_Source_MultiplayerProject_Variant_Combat_CombatCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
