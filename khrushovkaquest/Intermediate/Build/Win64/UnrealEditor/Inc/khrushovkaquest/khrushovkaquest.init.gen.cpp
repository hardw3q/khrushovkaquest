// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodekhrushovkaquest_init() {}
	KHRUSHOVKAQUEST_API UFunction* Z_Construct_UDelegateFunction_khrushovkaquest_OnPickUp__DelegateSignature();
	KHRUSHOVKAQUEST_API UFunction* Z_Construct_UDelegateFunction_khrushovkaquest_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_khrushovkaquest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_khrushovkaquest()
	{
		if (!Z_Registration_Info_UPackage__Script_khrushovkaquest.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_khrushovkaquest_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_khrushovkaquest_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/khrushovkaquest",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA17F59FA,
				0xDF105FEE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_khrushovkaquest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_khrushovkaquest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_khrushovkaquest(Z_Construct_UPackage__Script_khrushovkaquest, TEXT("/Script/khrushovkaquest"), Z_Registration_Info_UPackage__Script_khrushovkaquest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA17F59FA, 0xDF105FEE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
