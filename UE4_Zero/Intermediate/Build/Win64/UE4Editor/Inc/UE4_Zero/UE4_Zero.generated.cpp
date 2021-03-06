// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "UE4_Zero.h"
#include "UE4_Zero.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1UE4_Zero() {}
	void ABullet::StaticRegisterNativesABullet()
	{
	}
	IMPLEMENT_CLASS(ABullet, 563708539);
	void AMy_PlayerController::StaticRegisterNativesAMy_PlayerController()
	{
	}
	IMPLEMENT_CLASS(AMy_PlayerController, 2337898669);
	void UPlayerMovement::StaticRegisterNativesUPlayerMovement()
	{
	}
	IMPLEMENT_CLASS(UPlayerMovement, 2394685012);
	void APlayerZero::StaticRegisterNativesAPlayerZero()
	{
	}
	IMPLEMENT_CLASS(APlayerZero, 1975589682);
	void AUE4_ZeroGameModeBase::StaticRegisterNativesAUE4_ZeroGameModeBase()
	{
	}
	IMPLEMENT_CLASS(AUE4_ZeroGameModeBase, 3750418435);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API class UClass* Z_Construct_UClass_UPawnMovementComponent();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PAPER2D_API class UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PAPER2D_API class UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	UE4_ZERO_API class UClass* Z_Construct_UClass_ABullet_NoRegister();
	UE4_ZERO_API class UClass* Z_Construct_UClass_ABullet();
	UE4_ZERO_API class UClass* Z_Construct_UClass_AMy_PlayerController_NoRegister();
	UE4_ZERO_API class UClass* Z_Construct_UClass_AMy_PlayerController();
	UE4_ZERO_API class UClass* Z_Construct_UClass_UPlayerMovement_NoRegister();
	UE4_ZERO_API class UClass* Z_Construct_UClass_UPlayerMovement();
	UE4_ZERO_API class UClass* Z_Construct_UClass_APlayerZero_NoRegister();
	UE4_ZERO_API class UClass* Z_Construct_UClass_APlayerZero();
	UE4_ZERO_API class UClass* Z_Construct_UClass_AUE4_ZeroGameModeBase_NoRegister();
	UE4_ZERO_API class UClass* Z_Construct_UClass_AUE4_ZeroGameModeBase();
	UE4_ZERO_API class UPackage* Z_Construct_UPackage__Script_UE4_Zero();
	UClass* Z_Construct_UClass_ABullet_NoRegister()
	{
		return ABullet::StaticClass();
	}
	UClass* Z_Construct_UClass_ABullet()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_UE4_Zero();
			OuterClass = ABullet::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_m_projecileMovement = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_projecileMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(m_projecileMovement, ABullet), 0x00100000000a0009, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_m_colider = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_colider"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(m_colider, ABullet), 0x00100000000b0009, Z_Construct_UClass_USphereComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Bullet.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Bullet.h"));
				MetaData->SetValue(NewProp_m_projecileMovement, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_m_projecileMovement, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_m_projecileMovement, TEXT("ModuleRelativePath"), TEXT("Bullet.h"));
				MetaData->SetValue(NewProp_m_projecileMovement, TEXT("ToolTip"), TEXT("a class provided by UE4 for controling a projectiles movement"));
				MetaData->SetValue(NewProp_m_colider, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_m_colider, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_m_colider, TEXT("ModuleRelativePath"), TEXT("Bullet.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABullet(Z_Construct_UClass_ABullet, &ABullet::StaticClass, TEXT("ABullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABullet);
	UClass* Z_Construct_UClass_AMy_PlayerController_NoRegister()
	{
		return AMy_PlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AMy_PlayerController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_UE4_Zero();
			OuterClass = AMy_PlayerController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900284;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("My_PlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("My_PlayerController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMy_PlayerController(Z_Construct_UClass_AMy_PlayerController, &AMy_PlayerController::StaticClass, TEXT("AMy_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMy_PlayerController);
	UClass* Z_Construct_UClass_UPlayerMovement_NoRegister()
	{
		return UPlayerMovement::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlayerMovement()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UPawnMovementComponent();
			Z_Construct_UPackage__Script_UE4_Zero();
			OuterClass = UPlayerMovement::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00084;


				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PlayerMovement.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PlayerMovement.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerMovement(Z_Construct_UClass_UPlayerMovement, &UPlayerMovement::StaticClass, TEXT("UPlayerMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMovement);
	UClass* Z_Construct_UClass_APlayerZero_NoRegister()
	{
		return APlayerZero::StaticClass();
	}
	UClass* Z_Construct_UClass_APlayerZero()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_UE4_Zero();
			OuterClass = APlayerZero::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_m_Bullet = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_Bullet"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(m_Bullet, APlayerZero), 0x0014000000010001, Z_Construct_UClass_ABullet_NoRegister(), UClass::StaticClass());
				UProperty* NewProp_m_projectileOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_projectileOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(m_projectileOffset, APlayerZero), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_m_SwordAnim = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_SwordAnim"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(m_SwordAnim, APlayerZero), 0x0010000000000005, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_m_ShootAnim = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_ShootAnim"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(m_ShootAnim, APlayerZero), 0x0010000000000005, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_m_WalkAnim = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_WalkAnim"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(m_WalkAnim, APlayerZero), 0x0010000000000005, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_m_StandAnim = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_StandAnim"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(m_StandAnim, APlayerZero), 0x0010000000000005, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_m_Sprite = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_Sprite"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(m_Sprite, APlayerZero), 0x00100000000a001d, Z_Construct_UClass_UPaperFlipbookComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PlayerZero.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PlayerZero.h"));
				MetaData->SetValue(NewProp_m_Bullet, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_m_Bullet, TEXT("ModuleRelativePath"), TEXT("PlayerZero.h"));
				MetaData->SetValue(NewProp_m_projectileOffset, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_m_projectileOffset, TEXT("ModuleRelativePath"), TEXT("PlayerZero.h"));
				MetaData->SetValue(NewProp_m_SwordAnim, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_m_SwordAnim, TEXT("ModuleRelativePath"), TEXT("PlayerZero.h"));
				MetaData->SetValue(NewProp_m_ShootAnim, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_m_ShootAnim, TEXT("ModuleRelativePath"), TEXT("PlayerZero.h"));
				MetaData->SetValue(NewProp_m_WalkAnim, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_m_WalkAnim, TEXT("ModuleRelativePath"), TEXT("PlayerZero.h"));
				MetaData->SetValue(NewProp_m_StandAnim, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_m_StandAnim, TEXT("ModuleRelativePath"), TEXT("PlayerZero.h"));
				MetaData->SetValue(NewProp_m_Sprite, TEXT("Category"), TEXT("Character"));
				MetaData->SetValue(NewProp_m_Sprite, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_m_Sprite, TEXT("ModuleRelativePath"), TEXT("PlayerZero.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerZero(Z_Construct_UClass_APlayerZero, &APlayerZero::StaticClass, TEXT("APlayerZero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerZero);
	UClass* Z_Construct_UClass_AUE4_ZeroGameModeBase_NoRegister()
	{
		return AUE4_ZeroGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AUE4_ZeroGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_UE4_Zero();
			OuterClass = AUE4_ZeroGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UE4_ZeroGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("UE4_ZeroGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4_ZeroGameModeBase(Z_Construct_UClass_AUE4_ZeroGameModeBase, &AUE4_ZeroGameModeBase::StaticClass, TEXT("AUE4_ZeroGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4_ZeroGameModeBase);
	UPackage* Z_Construct_UPackage__Script_UE4_Zero()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/UE4_Zero")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x940F4CBF;
			Guid.B = 0x93D584E3;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
