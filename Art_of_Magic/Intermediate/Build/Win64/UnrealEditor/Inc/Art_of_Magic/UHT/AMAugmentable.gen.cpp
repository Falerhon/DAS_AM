// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Art_of_Magic/Public/SpellParts/AMAugmentable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMAugmentable() {}
// Cross Module References
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMAugmentable();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMAugmentable_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Art_of_Magic();
// End Cross Module References
	void UAMAugmentable::StaticRegisterNativesUAMAugmentable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAMAugmentable);
	UClass* Z_Construct_UClass_UAMAugmentable_NoRegister()
	{
		return UAMAugmentable::StaticClass();
	}
	struct Z_Construct_UClass_UAMAugmentable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAMAugmentable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Art_of_Magic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAugmentable_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMAugmentable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpellParts/AMAugmentable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAMAugmentable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAMAugmentable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAMAugmentable_Statics::ClassParams = {
		&UAMAugmentable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMAugmentable_Statics::Class_MetaDataParams), Z_Construct_UClass_UAMAugmentable_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAMAugmentable()
	{
		if (!Z_Registration_Info_UClass_UAMAugmentable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAMAugmentable.OuterSingleton, Z_Construct_UClass_UAMAugmentable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAMAugmentable.OuterSingleton;
	}
	template<> ART_OF_MAGIC_API UClass* StaticClass<UAMAugmentable>()
	{
		return UAMAugmentable::StaticClass();
	}
	UAMAugmentable::UAMAugmentable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAMAugmentable);
	UAMAugmentable::~UAMAugmentable() {}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMAugmentable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMAugmentable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAMAugmentable, UAMAugmentable::StaticClass, TEXT("UAMAugmentable"), &Z_Registration_Info_UClass_UAMAugmentable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAMAugmentable), 3329271126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMAugmentable_h_4051492231(TEXT("/Script/Art_of_Magic"),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMAugmentable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMAugmentable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
