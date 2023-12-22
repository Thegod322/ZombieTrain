// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZombieTrain/ZombieTrainGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieTrainGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ZombieTrain();
	ZOMBIETRAIN_API UClass* Z_Construct_UClass_AZombieTrainGameMode();
	ZOMBIETRAIN_API UClass* Z_Construct_UClass_AZombieTrainGameMode_NoRegister();
// End Cross Module References
	void AZombieTrainGameMode::StaticRegisterNativesAZombieTrainGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZombieTrainGameMode);
	UClass* Z_Construct_UClass_AZombieTrainGameMode_NoRegister()
	{
		return AZombieTrainGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AZombieTrainGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieTrainGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ZombieTrain,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieTrainGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieTrainGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ZombieTrainGameMode.h" },
		{ "ModuleRelativePath", "ZombieTrainGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieTrainGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieTrainGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AZombieTrainGameMode_Statics::ClassParams = {
		&AZombieTrainGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieTrainGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AZombieTrainGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AZombieTrainGameMode()
	{
		if (!Z_Registration_Info_UClass_AZombieTrainGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZombieTrainGameMode.OuterSingleton, Z_Construct_UClass_AZombieTrainGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AZombieTrainGameMode.OuterSingleton;
	}
	template<> ZOMBIETRAIN_API UClass* StaticClass<AZombieTrainGameMode>()
	{
		return AZombieTrainGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieTrainGameMode);
	AZombieTrainGameMode::~AZombieTrainGameMode() {}
	struct Z_CompiledInDeferFile_FID_ZombieTrain_Source_ZombieTrain_ZombieTrainGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ZombieTrain_Source_ZombieTrain_ZombieTrainGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AZombieTrainGameMode, AZombieTrainGameMode::StaticClass, TEXT("AZombieTrainGameMode"), &Z_Registration_Info_UClass_AZombieTrainGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZombieTrainGameMode), 3404206353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ZombieTrain_Source_ZombieTrain_ZombieTrainGameMode_h_3481292165(TEXT("/Script/ZombieTrain"),
		Z_CompiledInDeferFile_FID_ZombieTrain_Source_ZombieTrain_ZombieTrainGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ZombieTrain_Source_ZombieTrain_ZombieTrainGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
