// Copyright Epic Games, Inc. All Rights Reserved.

#include "Art_of_Magic.h"

#define LOCTEXT_NAMESPACE "FArt_of_MagicModule"

void FArt_of_MagicModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FArt_of_MagicModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FArt_of_MagicModule, Art_of_Magic)