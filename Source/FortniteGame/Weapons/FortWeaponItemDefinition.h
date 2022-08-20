// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../ItemDef/FortWorldItemDefinition.h"
#include "../Athena/ItemDef/AthenaItemWrapDefinition.h" 
#include "../Enum/EFortDisplayTier.h"
#include "FortWeaponItemDefinition.generated.h"

USTRUCT()
struct FFortCreativeTagsHelper
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FName> CreativeTags;
};

UCLASS()
class FORTNITEGAME_API UFortWeaponItemDefinition : public UFortWorldItemDefinition
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
		FSoftClassPath WeaponActorClass;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<USkeletalMesh> WeaponMeshOverride;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAthenaItemWrapDefinition> IntrinsicOverrideWrap;

	UPROPERTY(EditAnywhere)
		FDataTableRowHandle WeaponStatHandle;

	UPROPERTY(EditAnywhere)
		FScalableFloat WeaponRechargeAmmoRate;

	UPROPERTY(EditAnywhere)
		FName AlterationSlotsLoadoutRow;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortWorldItemDefinition> AmmoData;

	UPROPERTY(EditAnywhere)
		float LowAmmoPercentage;

	UPROPERTY(EditAnywhere)
		EFortDisplayTier DisplayTier;

	UPROPERTY(EditAnywhere)
		bool bUsesPhantomReserveAmmo;

	UPROPERTY(EditAnywhere)
		bool bAllowSecondaryFireToInterruptPrimary;

	UPROPERTY(EditAnywhere)
		bool bAllowTargetingDuringReload;

	UPROPERTY(EditAnywhere)
		bool bTargetingPreventsReload;

	UPROPERTY(EditAnywhere)
		bool bCanFireWhileInstigatorTethered;

	UPROPERTY(EditAnywhere)
		bool bCanFireWhileNotTargetedInVehicle;

	UPROPERTY(EditAnywhere)
		bool bAlwaysChargeUpToMin;

	UPROPERTY(EditAnywhere)
		bool bReticleCornerOutsideSpreadRadius;

	UPROPERTY(EditAnywhere)
		bool bValidForLastEquipped;

	UPROPERTY(EditAnywhere)
		bool bPreventDefaultPreload;

	UPROPERTY(EditAnywhere)
		bool bRequestClientPreload;

	UPROPERTY(EditAnywhere)
		float HitNotifyDuration;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> ReticleImage;

	UPROPERTY(EditAnywhere)
		TArray<float> ReticleCornerAngles;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> ReticleCenterImage;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> ReticleCenterPerfectAimImage;

	UPROPERTY(EditAnywhere)
		FVector2D ReticleCenterImageOffset;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> ReticleInvalidTargetImage;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer AnalyticTags;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer PlayerGrantedGameplayTags;

	UPROPERTY(EditAnywhere)
		TArray<FName> ActualAnalyticFNames;

	UPROPERTY(EditAnywhere)
		FFortCreativeTagsHelper CreativeTagsHelper;
};