// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "khrushovkaquest/khrushovkaquestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodekhrushovkaquestGameMode() {}
// Cross Module References
	KHRUSHOVKAQUEST_API UClass* Z_Construct_UClass_AkhrushovkaquestGameMode_NoRegister();
	KHRUSHOVKAQUEST_API UClass* Z_Construct_UClass_AkhrushovkaquestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_khrushovkaquest();
// End Cross Module References
	void AkhrushovkaquestGameMode::StaticRegisterNativesAkhrushovkaquestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AkhrushovkaquestGameMode);
	UClass* Z_Construct_UClass_AkhrushovkaquestGameMode_NoRegister()
	{
		return AkhrushovkaquestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AkhrushovkaquestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AkhrushovkaquestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_khrushovkaquest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AkhrushovkaquestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "khrushovkaquestGameMode.h" },
		{ "ModuleRelativePath", "khrushovkaquestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AkhrushovkaquestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AkhrushovkaquestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AkhrushovkaquestGameMode_Statics::ClassParams = {
		&AkhrushovkaquestGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AkhrushovkaquestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AkhrushovkaquestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AkhrushovkaquestGameMode()
	{
		if (!Z_Registration_Info_UClass_AkhrushovkaquestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AkhrushovkaquestGameMode.OuterSingleton, Z_Construct_UClass_AkhrushovkaquestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AkhrushovkaquestGameMode.OuterSingleton;
	}
	template<> KHRUSHOVKAQUEST_API UClass* StaticClass<AkhrushovkaquestGameMode>()
	{
		return AkhrushovkaquestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AkhrushovkaquestGameMode);
	struct Z_CompiledInDeferFile_FID_khrushovkaquest_Source_khrushovkaquest_khrushovkaquestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_khrushovkaquest_Source_khrushovkaquest_khrushovkaquestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AkhrushovkaquestGameMode, AkhrushovkaquestGameMode::StaticClass, TEXT("AkhrushovkaquestGameMode"), &Z_Registration_Info_UClass_AkhrushovkaquestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AkhrushovkaquestGameMode), 1119986085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_khrushovkaquest_Source_khrushovkaquest_khrushovkaquestGameMode_h_2463687741(TEXT("/Script/khrushovkaquest"),
		Z_CompiledInDeferFile_FID_khrushovkaquest_Source_khrushovkaquest_khrushovkaquestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_khrushovkaquest_Source_khrushovkaquest_khrushovkaquestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
