// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/CurveTable.h"
#include "AttributeSet.h"
#include "EFortInventoryFilter.h"
#include "EFortTemplateAccess.h"
#include "EFortItemType.h"
#include "EFortItemTier.h"
#include "EFortRarity.h"
#include "FortItemSeriesDefinition.h"
#include "FortMtxOfferData.h"
#include "GameplayTags.h"
#include "McpItemDefinitionBase.h"
#include "FortItemDefinition.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortItemDefinition : public UMcpItemDefinitionBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	EFortRarity Rarity = EFortRarity::Handmade;

	UPROPERTY(EditAnywhere)
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

	UPROPERTY(EditAnywhere)
	bool bIsNeverPersisted;

	UPROPERTY(EditAnywhere)
	bool bAllowMultipleStacks;

	UPROPERTY(EditAnywhere)
	bool bAutoBalanceStacks;

	UPROPERTY(EditAnywhere)
	bool bForceAutoPickup;

	UPROPERTY(EditAnywhere)
	bool bInventorySizeLimited;

	UPROPERTY(EditAnywhere)
	FText ItemTypeNameOverride;

	UPROPERTY(EditAnywhere)
	FText DisplayName;

	UPROPERTY(EditAnywhere)
	FText ShortDescription;

	UPROPERTY(EditAnywhere)
	FText Description;

	UPROPERTY(EditAnywhere)
	FText DisplayNamePrefix;

	UPROPERTY(EditAnywhere)
	FText SearchTags;

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
	float FrontendPreviewScale;

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
	UFortItemSeriesDefinition* Series;

	UPROPERTY(EditAnywhere)
	FVector FrontendPreviewPivotOffset;

	UPROPERTY(EditAnywhere)
	FRotator FrontendPreviewInitialRotation;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UObject> FrontendPreviewMeshOverride;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UObject> FrontendPreviewSkeletalMeshOverride;
};