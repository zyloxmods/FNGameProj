// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Items/FortWorldItemDefinition.h"
#include "Engine/DataTable.h"
#include "Abilities/FortAbilitySet.h"
#include "Athena/Items/AthenaItemWrapDefinition.h"
#include "Customization/CustomCharacterPart.h"
#include "Items/FortAlterationItemDefinition.h"
#include "FortWeaponAdditionalData.h"
#include "FortWeaponItemDefinition.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FFortCreativeTagsHelper 
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	 TArray<FName> CreativeTags;
};

UCLASS()
class FORTNITEGAME_API UFortWeaponItemDefinition : public UFortWorldItemDefinition
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UClass* WeaponActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMesh* WeaponMeshOverride;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAthenaItemWrapDefinition> IntrinsicOverrideWrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FDataTableRowHandle WeaponStatHandle;

	UPROPERTY(EditAnywhere)
		FScalableFloat WeaponRechargeAmmoRate;

	UPROPERTY(EditAnywhere)
		FScalableFloat WeaponRechargeAmmoQuantity;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortAbilitySet> AbilitySet;

	UPROPERTY(EditAnywhere)
		FName AlterationSlotsLoadoutRow;

	UPROPERTY(EditAnywhere)
		FName BaselineAlterationSlotsLoadoutRow;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftObjectPtr<UFortAlterationItemDefinition> BaseAlteration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftObjectPtr<UFortAlterationItemDefinition> BaseCosmeticAlteration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UClass* PrimaryFireAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UClass* SecondaryFireAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UClass* ReloadAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UClass* OnHitAbility;

	UPROPERTY(EditAnywhere)
		TArray<UClass*> EquippedAbilities;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortAbilitySet> EquippedAbilitySet;

	UPROPERTY(EditAnywhere)
		TArray<UCustomCharacterPart*> EquippedCharacterParts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UFortWorldItemDefinition* AmmoData;

	UPROPERTY(EditAnywhere, Instanced)
		TArray<UFortWeaponAdditionalData*> AdditionalDataFields;

	UPROPERTY(EditAnywhere)
		float LowAmmoPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EFortWeaponTriggerType TriggerType;

	UPROPERTY(EditAnywhere)
		EFortWeaponTriggerType SecondaryTriggerType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EFortDisplayTier DisplayTier;

	UPROPERTY(EditAnywhere)
		bool bUsesPhantomReserveAmmo;

	UPROPERTY(EditAnywhere)
		bool bUsesCustomAmmoType;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* ReticleImage;

	UPROPERTY(EditAnywhere)
		TArray<float> ReticleCornerAngles;

	UPROPERTY(EditAnywhere)
		UTexture2D* ReticleCenterImage;

	UPROPERTY(EditAnywhere)
		UTexture2D* ReticleCenterPerfectAimImage;

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

	UPROPERTY(EditAnywhere, Instanced)
		UFortWeaponAdditionalData* AdditionalData;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("Weapon", GetFName());
	}
};


