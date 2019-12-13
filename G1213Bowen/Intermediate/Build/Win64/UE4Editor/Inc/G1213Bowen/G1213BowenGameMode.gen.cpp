// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213Bowen/G1213BowenGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeG1213BowenGameMode() {}
// Cross Module References
	G1213BOWEN_API UClass* Z_Construct_UClass_AG1213BowenGameMode_NoRegister();
	G1213BOWEN_API UClass* Z_Construct_UClass_AG1213BowenGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_G1213Bowen();
// End Cross Module References
	void AG1213BowenGameMode::StaticRegisterNativesAG1213BowenGameMode()
	{
	}
	UClass* Z_Construct_UClass_AG1213BowenGameMode_NoRegister()
	{
		return AG1213BowenGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AG1213BowenGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AG1213BowenGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213Bowen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AG1213BowenGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "G1213BowenGameMode.h" },
		{ "ModuleRelativePath", "G1213BowenGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AG1213BowenGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AG1213BowenGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AG1213BowenGameMode_Statics::ClassParams = {
		&AG1213BowenGameMode::StaticClass,
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
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AG1213BowenGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AG1213BowenGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AG1213BowenGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AG1213BowenGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AG1213BowenGameMode, 1985985754);
	template<> G1213BOWEN_API UClass* StaticClass<AG1213BowenGameMode>()
	{
		return AG1213BowenGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AG1213BowenGameMode(Z_Construct_UClass_AG1213BowenGameMode, &AG1213BowenGameMode::StaticClass, TEXT("/Script/G1213Bowen"), TEXT("AG1213BowenGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AG1213BowenGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
