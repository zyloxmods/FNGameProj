// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/FortItemDefinition.h"
#include "Styling/SlateBrush.h"
#include "FortniteGame/FortniteGame.h"
#include "FortWorldItemDefinition.generated.h"


USTRUCT(BlueprintType)
struct FFortPickupTagTestContainer
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FGameplayTagContainer Tags;

	UPROPERTY(EditAnywhere)
		FText FailReason;
};

USTRUCT(BlueprintType)
struct FFortPickupRestrictionLists
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FFortPickupTagTestContainer WhiteList;

	UPROPERTY(EditAnywhere)
		FFortPickupTagTestContainer Blacklist;
};


UCLASS(BlueprintType)
class FORTNITEGAME_API UFortWorldItemDefinition : public UFortItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FGameplayTagContainer RequiredEquipTags;

	UPROPERTY(EditAnywhere)
		TArray<FFortPickupRestrictionLists> PickupRestrictionListEntry;

	//UPROPERTY(EditAnywhere)
		//EWorldItemDropBehavior DropBehavior;

	UPROPERTY(EditAnywhere)
		bool bIgnoreRespawningForDroppingAsPickup;

	UPROPERTY(EditAnywhere)
		bool bCanAutoEquipByClass;

	UPROPERTY(EditAnywhere)
		bool bPersistInInventoryWhenFinalStackEmpty;

	UPROPERTY(EditAnywhere)
		bool bSupportsQuickbarFocus;

	UPROPERTY(EditAnywhere)
		bool bSupportsQuickbarFocusForGamepadOnly;

	UPROPERTY(EditAnywhere)
		bool bShouldActivateWhenFocused;

	UPROPERTY(EditAnywhere)
		bool bForceFocusWhenAdded;

	UPROPERTY(EditAnywhere)
		bool bForceIntoOverflow;

	UPROPERTY(EditAnywhere)
		bool bForceStayInOverflow;

	UPROPERTY(EditAnywhere)
		bool bDropCurrentItemOnOverflow;

	UPROPERTY(EditAnywhere)
		bool bShouldShowItemToast;

	UPROPERTY(EditAnywhere)
		bool bShowDirectionalArrowWhenFarOff;

	UPROPERTY(EditAnywhere)
		bool bCanBeDropped;

	UPROPERTY(EditAnywhere)
		bool bCanBeReplacedByPickup;

	UPROPERTY(EditAnywhere)
		bool bItemCanBeStolen;

	UPROPERTY(EditAnywhere)
		bool bCanBeDepositedInStorageVault;

	UPROPERTY(EditAnywhere)
		bool bItemHasDurability;

	UPROPERTY(EditAnywhere)
		bool bAllowedToBeLockedInInventory;

	UPROPERTY(EditAnywhere)
		bool bOverridePickupMeshTransform;

	UPROPERTY(EditAnywhere)
		bool bAlwaysCountForCollectionQuest;

	UPROPERTY(EditAnywhere)
		bool bDropOnDeath;

	UPROPERTY(EditAnywhere)
		bool bDropOnLogout;

	UPROPERTY(EditAnywhere)
		bool bDropOnDBNO;

	UPROPERTY(EditAnywhere)
		bool bDoesNotNeedSourceSchematic;

	UPROPERTY(EditAnywhere)
		bool bUsesGoverningTags;

	UPROPERTY(EditAnywhere)
		int DropCount;

	UPROPERTY(EditAnywhere)
		float MiniMapViewableDistance;

	UPROPERTY(EditAnywhere)
		FSlateBrush MiniMapIconBrush;

	UPROPERTY(EditAnywhere)
		FText OwnerPickupText;

	UPROPERTY(EditAnywhere)
		FDataTableCategoryHandle LootLevelData;

	UPROPERTY(EditAnywhere)
		FTransform PickupMeshTransform;

	UPROPERTY(EditAnywhere)
		bool bIsPickupASpecialActor;

	UPROPERTY(EditAnywhere)
		FGameplayTag SpecialActorPickupTag;

	//UPROPERTY(EditAnywhere)
	//	TArray<FSpecialActorSingleStatData> SpecialActorPickupStatList;

	UPROPERTY(EditAnywhere)
		FName PickupSpecialActorUniqueID;

	UPROPERTY(EditAnywhere)
		FSlateBrush PickupMinimapIconBrush;

	UPROPERTY(EditAnywhere)
		FVector2D PickupMinimapIconScale;

	UPROPERTY(EditAnywhere)
		FSlateBrush PickupCompassIconBrush;

	UPROPERTY(EditAnywhere)
		FScalableFloat PickupDespawnTime;

	UPROPERTY(EditAnywhere)
		FScalableFloat InStormPickupDespawnTime;

	UPROPERTY(EditAnywhere)
		FScalableFloat NetworkCullDistanceOverride;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UStaticMesh> PickupStaticMesh;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<USkeletalMesh> PickupSkeletalMesh;

	UPROPERTY(EditAnywhere)
		UClass* PickupEffectOverride;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<USoundBase> PickupSound;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<USoundBase> PickupByNearbyPawnSound;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<USoundBase> DropSound;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<USoundBase> DroppedLoopSound;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<USoundBase> LandedSound;

	UPROPERTY(EditAnywhere)
		FDataTableRowHandle DisassembleRecipe;

	UPROPERTY(EditAnywhere)
		float DisassembleDurabilityDegradeMinLootPercent;

	UPROPERTY(EditAnywhere)
		float DisassembleDurabilityDegradeMaxLootPercent;

	UPROPERTY(EditAnywhere)
		int PreferredQuickbarSlot;

	UPROPERTY(EditAnywhere)
		int MinLevel;

	UPROPERTY(EditAnywhere)
		int MaxLevel;

	UPROPERTY(EditAnywhere)
		uint8 NumberOfSlotsToTake;
};