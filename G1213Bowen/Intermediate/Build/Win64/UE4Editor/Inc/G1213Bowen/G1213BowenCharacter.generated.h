// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef G1213BOWEN_G1213BowenCharacter_generated_h
#error "G1213BowenCharacter.generated.h already included, missing '#pragma once' in G1213BowenCharacter.h"
#endif
#define G1213BOWEN_G1213BowenCharacter_generated_h

#define G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_RPC_WRAPPERS
#define G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAG1213BowenCharacter(); \
	friend struct Z_Construct_UClass_AG1213BowenCharacter_Statics; \
public: \
	DECLARE_CLASS(AG1213BowenCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/G1213Bowen"), NO_API) \
	DECLARE_SERIALIZER(AG1213BowenCharacter)


#define G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAG1213BowenCharacter(); \
	friend struct Z_Construct_UClass_AG1213BowenCharacter_Statics; \
public: \
	DECLARE_CLASS(AG1213BowenCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/G1213Bowen"), NO_API) \
	DECLARE_SERIALIZER(AG1213BowenCharacter)


#define G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AG1213BowenCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AG1213BowenCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AG1213BowenCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AG1213BowenCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AG1213BowenCharacter(AG1213BowenCharacter&&); \
	NO_API AG1213BowenCharacter(const AG1213BowenCharacter&); \
public:


#define G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AG1213BowenCharacter(AG1213BowenCharacter&&); \
	NO_API AG1213BowenCharacter(const AG1213BowenCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AG1213BowenCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AG1213BowenCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AG1213BowenCharacter)


#define G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AG1213BowenCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AG1213BowenCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AG1213BowenCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AG1213BowenCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AG1213BowenCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AG1213BowenCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AG1213BowenCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AG1213BowenCharacter, L_MotionController); }


#define G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_11_PROLOG
#define G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_RPC_WRAPPERS \
	G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_INCLASS \
	G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_INCLASS_NO_PURE_DECLS \
	G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> G1213BOWEN_API UClass* StaticClass<class AG1213BowenCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID G1213Bowen_Source_G1213Bowen_G1213BowenCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
