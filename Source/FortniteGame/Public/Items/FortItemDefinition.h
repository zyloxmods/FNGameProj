// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "McpItemDefinitionBase.h"
//#include "FortniteGame/Public/Items/FortItem.h"
#include "Engine/Texture2D.h"
#include "GameplayTagContainer.h"
#include "Engine/DataTable.h"
#include "GameplayTags.h"
#include "ScalableFloat.h"
#include "AttributeSet.h"
#include "Items/FortItemSeriesDefinition.h"
#include "../FortniteGame.h"
#include "Engine/CurveTable.h"
#include "FortniteVersion/Public/FortReleaseVersion.h"
#include "FortItemDefinition.generated.h"

/* Weapon statistics structures */

UCLASS()
class UItemPreviewImageOverride : public UObject
{
	GENERATED_BODY()

public:
//	UPROPERTY(EditAnywhere)
		//OverrideTexture;                               // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteGame.ItemPreviewImageOverride.OverrideTexture

	UPROPERTY(EditAnywhere)
	 FGameplayTag TagToCheck;                                               // 0x0050(0x0004) (Edit, DisableEditOnInstance)
};
USTRUCT()
struct FFortTooltipDisplayStatInfo 
{
	GENERATED_BODY()

public:


	UPROPERTY(EditAnywhere)
	 FGameplayTag Token; // 0x00(0x04)

	UPROPERTY(EditAnywhere)
	 FGameplayAttribute Attribute; // 0x08(0x38)

	UPROPERTY(EditAnywhere)
	 FGameplayTagContainer ContextTags; // 0x40(0x20)

	UPROPERTY(EditAnywhere)
	bool bLowerIsBetter = false; // 0x60(0x01)
};

USTRUCT()
struct FFortTooltipDisplayStatsCategory 
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 FText CategoryName; // 0x00(0x18)

	UPROPERTY(EditAnywhere)
	 TArray<FFortTooltipDisplayStatInfo> TooltipStats; 
};
UCLASS()
class UFortTooltipDisplayStatsList : public UDataAsset 
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FFortTooltipDisplayStatsCategory> TooltipCategories; 
};

UCLASS()
class FORTNITEGAME_API UFortItemDefinition : public UMcpItemDefinitionBase
{
	//UFUNCTION(BlueprintCallable)
		//class UFortItem* CreateTemporaryItemInstanceBP(int Count, int Level);

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TSoftClassPtr<UObject> OnItemCountChanged;

	UPROPERTY(EditAnywhere, AssetRegistrySearchable)
		EFortItemType ItemType;

	UPROPERTY(EditAnywhere)
		EFortItemType PrimaryAssetIdItemTypeOverride;

	UPROPERTY(EditAnywhere)
		EFortInventoryFilter FilterOverride;

	UPROPERTY(EditAnywhere)
		EFortItemTier Tier;

	UPROPERTY(EditAnywhere)
		EFortItemTier MaxTier;

	UPROPERTY(EditAnywhere)
		EFortTemplateAccess Access;

	UPROPERTY(EditAnywhere)
		bool bIsAccountItem;

	UPROPERTY(EditAnywhere, AssetRegistrySearchable)
		bool bNeverPersisted;

	UPROPERTY(EditAnywhere)
		bool bAllowMultipleStacks;

	UPROPERTY(EditAnywhere)
		bool bAutoBalanceStacks;

	UPROPERTY(EditAnywhere)
		bool bAllowSwapSingleStack;

	UPROPERTY(EditAnywhere)
		bool bForceAutoPickup;

	UPROPERTY(EditAnywhere)
		bool bInventorySizeLimited;

	UPROPERTY(EditAnywhere)
		FText ItemTypeNameOverride;

	UPROPERTY(EditAnywhere, AssetRegistrySearchable)
		FText DisplayName;

	UPROPERTY(EditAnywhere)
	   FText QuantityDisplayName;

	UPROPERTY(EditAnywhere)
		FText ShortDescription;

	UPROPERTY(EditAnywhere)
		FText Description;

	UPROPERTY(EditAnywhere)
		FText DisplayNamePrefix;

	UPROPERTY(EditAnywhere)
		FText SearchTags;

	UPROPERTY(EditAnywhere)
	    FName GiftBoxGroupName;

	UPROPERTY(EditAnywhere)
	    float FrontendPreviewScale;
	
	UPROPERTY(EditAnywhere)
		FGameplayTagContainer GameplayTags;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer AutomationTags;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer SecondaryCategoryOverrideTags;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer TertiaryCategoryOverrideTags;
		
	UPROPERTY(EditAnywhere)
		FScalableFloat MaxStackSize;

	UPROPERTY(EditAnywhere)
		FScalableFloat PurchaseItemLimit;

	UPROPERTY(EditAnywhere)
		TSoftClassPtr<UObject> TooltipClass;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UFortTooltipDisplayStatsList> StatList;

	UPROPERTY(EditAnywhere)
		FCurveTableRowHandle RatingLookup;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> WidePreviewImage;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> SmallPreviewImage;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> LargePreviewImage;

	UPROPERTY(EditAnywhere)
		FSoftObjectPath DisplayAssetPath;

	UPROPERTY(EditAnywhere)
		EFortRarity Rarity;

	UPROPERTY(EditAnywhere)
	  FDataTableRowHandle PopupDetailsTag;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		UFortItemSeriesDefinition* Series;

	UPROPERTY(EditAnywhere)
	    UItemPreviewImageOverride* ItemPreviewImageOverride;

	UPROPERTY(EditAnywhere)
	    FFortReleaseVersion PrmReportUntil;

	UPROPERTY(EditAnywhere)
	   FString PrmParameterName;

	UPROPERTY(EditAnywhere)
		FVector FrontendPreviewPivotOffset;

	UPROPERTY(EditAnywhere)
		FRotator FrontendPreviewInitialRotation;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UStaticMesh> FrontendPreviewMeshOverride;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<USkeletalMesh> FrontendPreviewSkeletalMeshOverride;

};
