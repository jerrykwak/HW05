// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyproject1_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Myproject1;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Myproject1()
	{
		if (!Z_Registration_Info_UPackage__Script_Myproject1.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Myproject1",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x2B960ADB,
				0xA11EBB2A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Myproject1.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Myproject1.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Myproject1(Z_Construct_UPackage__Script_Myproject1, TEXT("/Script/Myproject1"), Z_Registration_Info_UPackage__Script_Myproject1, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2B960ADB, 0xA11EBB2A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
