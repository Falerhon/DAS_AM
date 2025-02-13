// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Art_of_Magic/Public/SpellParts/AMComponentDescription.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMComponentDescription() {}
// Cross Module References
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMComponentDescription();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMComponentDescription_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Art_of_Magic();
// End Cross Module References
	void UAMComponentDescription::StaticRegisterNativesUAMComponentDescription()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAMComponentDescription);
	UClass* Z_Construct_UClass_UAMComponentDescription_NoRegister()
	{
		return UAMComponentDescription::StaticClass();
	}
	struct Z_Construct_UClass_UAMComponentDescription_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAMComponentDescription_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Art_of_Magic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMComponentDescription_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMComponentDescription_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpellParts/AMComponentDescription.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAMComponentDescription_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAMComponentDescription>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAMComponentDescription_Statics::ClassParams = {
		&UAMComponentDescription::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMComponentDescription_Statics::Class_MetaDataParams), Z_Construct_UClass_UAMComponentDescription_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAMComponentDescription()
	{
		if (!Z_Registration_Info_UClass_UAMComponentDescription.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAMComponentDescription.OuterSingleton, Z_Construct_UClass_UAMComponentDescription_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAMComponentDescription.OuterSingleton;
	}
	template<> ART_OF_MAGIC_API UClass* StaticClass<UAMComponentDescription>()
	{
		return UAMComponentDescription::StaticClass();
	}
	UAMComponentDescription::UAMComponentDescription(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAMComponentDescription);
	UAMComponentDescription::~UAMComponentDescription() {}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMComponentDescription_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMComponentDescription_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAMComponentDescription, UAMComponentDescription::StaticClass, TEXT("UAMComponentDescription"), &Z_Registration_Info_UClass_UAMComponentDescription, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAMComponentDescription), 2678270913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMComponentDescription_h_1883119999(TEXT("/Script/Art_of_Magic"),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMComponentDescription_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMComponentDescription_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
