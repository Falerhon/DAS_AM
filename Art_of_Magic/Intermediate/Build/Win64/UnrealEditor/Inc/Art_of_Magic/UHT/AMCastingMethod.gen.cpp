// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Art_of_Magic/Public/SpellParts/AMCastingMethod.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMCastingMethod() {}
// Cross Module References
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMCastingMethod();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMCastingMethod_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMEffect();
	UPackage* Z_Construct_UPackage__Script_Art_of_Magic();
// End Cross Module References
	void UAMCastingMethod::StaticRegisterNativesUAMCastingMethod()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAMCastingMethod);
	UClass* Z_Construct_UClass_UAMCastingMethod_NoRegister()
	{
		return UAMCastingMethod::StaticClass();
	}
	struct Z_Construct_UClass_UAMCastingMethod_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAMCastingMethod_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAMEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_Art_of_Magic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMCastingMethod_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMCastingMethod_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Effect who are used as a way to start the spell.\n * Should not do anything too complex to not restrict\n * the start of a spell.\n */" },
#endif
		{ "IncludePath", "SpellParts/AMCastingMethod.h" },
		{ "ModuleRelativePath", "Public/SpellParts/AMCastingMethod.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effect who are used as a way to start the spell.\nShould not do anything too complex to not restrict\nthe start of a spell." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAMCastingMethod_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAMCastingMethod>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAMCastingMethod_Statics::ClassParams = {
		&UAMCastingMethod::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMCastingMethod_Statics::Class_MetaDataParams), Z_Construct_UClass_UAMCastingMethod_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAMCastingMethod()
	{
		if (!Z_Registration_Info_UClass_UAMCastingMethod.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAMCastingMethod.OuterSingleton, Z_Construct_UClass_UAMCastingMethod_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAMCastingMethod.OuterSingleton;
	}
	template<> ART_OF_MAGIC_API UClass* StaticClass<UAMCastingMethod>()
	{
		return UAMCastingMethod::StaticClass();
	}
	UAMCastingMethod::UAMCastingMethod() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAMCastingMethod);
	UAMCastingMethod::~UAMCastingMethod() {}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMCastingMethod_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMCastingMethod_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAMCastingMethod, UAMCastingMethod::StaticClass, TEXT("UAMCastingMethod"), &Z_Registration_Info_UClass_UAMCastingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAMCastingMethod), 3734835181U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMCastingMethod_h_1061890355(TEXT("/Script/Art_of_Magic"),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMCastingMethod_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMCastingMethod_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
