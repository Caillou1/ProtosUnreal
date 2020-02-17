// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FloorIsLiterallyLava/FloorIsLiterallyLavaGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorIsLiterallyLavaGameModeBase() {}
// Cross Module References
	FLOORISLITERALLYLAVA_API UClass* Z_Construct_UClass_AFloorIsLiterallyLavaGameModeBase_NoRegister();
	FLOORISLITERALLYLAVA_API UClass* Z_Construct_UClass_AFloorIsLiterallyLavaGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FloorIsLiterallyLava();
// End Cross Module References
	void AFloorIsLiterallyLavaGameModeBase::StaticRegisterNativesAFloorIsLiterallyLavaGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFloorIsLiterallyLavaGameModeBase_NoRegister()
	{
		return AFloorIsLiterallyLavaGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFloorIsLiterallyLavaGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorIsLiterallyLavaGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FloorIsLiterallyLava,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorIsLiterallyLavaGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FloorIsLiterallyLavaGameModeBase.h" },
		{ "ModuleRelativePath", "FloorIsLiterallyLavaGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorIsLiterallyLavaGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorIsLiterallyLavaGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloorIsLiterallyLavaGameModeBase_Statics::ClassParams = {
		&AFloorIsLiterallyLavaGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFloorIsLiterallyLavaGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorIsLiterallyLavaGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloorIsLiterallyLavaGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloorIsLiterallyLavaGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloorIsLiterallyLavaGameModeBase, 283364580);
	template<> FLOORISLITERALLYLAVA_API UClass* StaticClass<AFloorIsLiterallyLavaGameModeBase>()
	{
		return AFloorIsLiterallyLavaGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloorIsLiterallyLavaGameModeBase(Z_Construct_UClass_AFloorIsLiterallyLavaGameModeBase, &AFloorIsLiterallyLavaGameModeBase::StaticClass, TEXT("/Script/FloorIsLiterallyLava"), TEXT("AFloorIsLiterallyLavaGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorIsLiterallyLavaGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
