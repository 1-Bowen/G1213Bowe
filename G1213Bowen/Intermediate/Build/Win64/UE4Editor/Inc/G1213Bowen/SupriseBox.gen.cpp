// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213Bowen/SupriseBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSupriseBox() {}
// Cross Module References
	G1213BOWEN_API UClass* Z_Construct_UClass_ASupriseBox_NoRegister();
	G1213BOWEN_API UClass* Z_Construct_UClass_ASupriseBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_G1213Bowen();
	G1213BOWEN_API UClass* Z_Construct_UClass_AG1213BowenCharacter_NoRegister();
// End Cross Module References
	void ASupriseBox::StaticRegisterNativesASupriseBox()
	{
	}
	UClass* Z_Construct_UClass_ASupriseBox_NoRegister()
	{
		return ASupriseBox::StaticClass();
	}
	struct Z_Construct_UClass_ASupriseBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASupriseBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213Bowen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASupriseBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SupriseBox.h" },
		{ "ModuleRelativePath", "SupriseBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASupriseBox_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "SupriseBox" },
		{ "ModuleRelativePath", "SupriseBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASupriseBox_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASupriseBox, Player), Z_Construct_UClass_AG1213BowenCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASupriseBox_Statics::NewProp_Player_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASupriseBox_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASupriseBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASupriseBox_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASupriseBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASupriseBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASupriseBox_Statics::ClassParams = {
		&ASupriseBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASupriseBox_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASupriseBox_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASupriseBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASupriseBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASupriseBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASupriseBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASupriseBox, 2783320169);
	template<> G1213BOWEN_API UClass* StaticClass<ASupriseBox>()
	{
		return ASupriseBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASupriseBox(Z_Construct_UClass_ASupriseBox, &ASupriseBox::StaticClass, TEXT("/Script/G1213Bowen"), TEXT("ASupriseBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASupriseBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
