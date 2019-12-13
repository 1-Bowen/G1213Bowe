// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213Bowen/UnluckTrap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnluckTrap() {}
// Cross Module References
	G1213BOWEN_API UClass* Z_Construct_UClass_AUnluckTrap_NoRegister();
	G1213BOWEN_API UClass* Z_Construct_UClass_AUnluckTrap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_G1213Bowen();
// End Cross Module References
	void AUnluckTrap::StaticRegisterNativesAUnluckTrap()
	{
	}
	UClass* Z_Construct_UClass_AUnluckTrap_NoRegister()
	{
		return AUnluckTrap::StaticClass();
	}
	struct Z_Construct_UClass_AUnluckTrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnluckTrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213Bowen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnluckTrap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnluckTrap.h" },
		{ "ModuleRelativePath", "UnluckTrap.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnluckTrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnluckTrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnluckTrap_Statics::ClassParams = {
		&AUnluckTrap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AUnluckTrap_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnluckTrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnluckTrap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnluckTrap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnluckTrap, 206910199);
	template<> G1213BOWEN_API UClass* StaticClass<AUnluckTrap>()
	{
		return AUnluckTrap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnluckTrap(Z_Construct_UClass_AUnluckTrap, &AUnluckTrap::StaticClass, TEXT("/Script/G1213Bowen"), TEXT("AUnluckTrap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnluckTrap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
