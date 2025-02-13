// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArt_of_Magic_init() {}
	ART_OF_MAGIC_API UFunction* Z_Construct_UDelegateFunction_Art_of_Magic_OnDataUpdate__DelegateSignature();
	ART_OF_MAGIC_API UFunction* Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature();
	ART_OF_MAGIC_API UFunction* Z_Construct_UDelegateFunction_Art_of_Magic_OnSpellComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Art_of_Magic;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Art_of_Magic()
	{
		if (!Z_Registration_Info_UPackage__Script_Art_of_Magic.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Art_of_Magic_OnDataUpdate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Art_of_Magic_OnSpellComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Art_of_Magic",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x19A8C94A,
				0xCC19ED2E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Art_of_Magic.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Art_of_Magic.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Art_of_Magic(Z_Construct_UPackage__Script_Art_of_Magic, TEXT("/Script/Art_of_Magic"), Z_Registration_Info_UPackage__Script_Art_of_Magic, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x19A8C94A, 0xCC19ED2E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
