// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MasteringUnreal.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1MasteringUnreal() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	MASTERINGUNREAL_API class UClass* Z_Construct_UClass_AMasteringUnrealGameModeBase_NoRegister();
	MASTERINGUNREAL_API class UClass* Z_Construct_UClass_AMasteringUnrealGameModeBase();
	MASTERINGUNREAL_API class UPackage* Z_Construct_UPackage__Script_MasteringUnreal();
	void AMasteringUnrealGameModeBase::StaticRegisterNativesAMasteringUnrealGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMasteringUnrealGameModeBase_NoRegister()
	{
		return AMasteringUnrealGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AMasteringUnrealGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_MasteringUnreal();
			OuterClass = AMasteringUnrealGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMasteringUnrealGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MasteringUnrealGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MasteringUnrealGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMasteringUnrealGameModeBase, 2704146804);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMasteringUnrealGameModeBase(Z_Construct_UClass_AMasteringUnrealGameModeBase, &AMasteringUnrealGameModeBase::StaticClass, TEXT("/Script/MasteringUnreal"), TEXT("AMasteringUnrealGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasteringUnrealGameModeBase);
	UPackage* Z_Construct_UPackage__Script_MasteringUnreal()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/MasteringUnreal")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x3AA189DE;
			Guid.B = 0x960C4B59;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
