// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213Bowen/UnluckTrop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnluckTrop() {}
// Cross Module References
	G1213BOWEN_API UClass* Z_Construct_UClass_AUnluckTrop_NoRegister();
	G1213BOWEN_API UClass* Z_Construct_UClass_AUnluckTrop();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_G1213Bowen();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AUnluckTrop::StaticRegisterNativesAUnluckTrop()
	{
	}
	UClass* Z_Construct_UClass_AUnluckTrop_NoRegister()
	{
		return AUnluckTrop::StaticClass();
	}
	struct Z_Construct_UClass_AUnluckTrop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnluckTrop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213Bowen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnluckTrop_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnluckTrop.h" },
		{ "ModuleRelativePath", "UnluckTrop.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnluckTrop_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "Category", "UnluckTrop" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnluckTrop.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnluckTrop_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnluckTrop, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnluckTrop_Statics::NewProp_CollisionBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnluckTrop_Statics::NewProp_CollisionBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnluckTrop_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "UnluckTrop" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnluckTrop.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnluckTrop_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnluckTrop, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnluckTrop_Statics::NewProp_BaseMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnluckTrop_Statics::NewProp_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnluckTrop_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "UnluckTrop" },
		{ "ModuleRelativePath", "UnluckTrop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnluckTrop_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnluckTrop, Damage), METADATA_PARAMS(Z_Construct_UClass_AUnluckTrop_Statics::NewProp_Damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnluckTrop_Statics::NewProp_Damage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnluckTrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnluckTrop_Statics::NewProp_CollisionBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnluckTrop_Statics::NewProp_BaseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnluckTrop_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnluckTrop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnluckTrop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnluckTrop_Statics::ClassParams = {
		&AUnluckTrop::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUnluckTrop_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AUnluckTrop_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AUnluckTrop_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnluckTrop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnluckTrop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnluckTrop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnluckTrop, 58881476);
	template<> G1213BOWEN_API UClass* StaticClass<AUnluckTrop>()
	{
		return AUnluckTrop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnluckTrop(Z_Construct_UClass_AUnluckTrop, &AUnluckTrop::StaticClass, TEXT("/Script/G1213Bowen"), TEXT("AUnluckTrop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnluckTrop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif