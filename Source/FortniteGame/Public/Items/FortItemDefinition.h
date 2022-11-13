// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "McpItemDefinitionBase.h"
//#include "FortniteGame/Public/Items/FortItem.h"
#include "Engine/Texture2D.h"
#include "GameplayTagContainer.h"
#include "Engine/DataTable.h"
#include "GameplayTags.h"
#include "AttributeSet.h"
#include "Items/FortItemSeriesDefinition.h"
#include "../FortniteGame.h"
#include "FortItemDefinition.generated.h"

/* Weapon statistics structures */


UCLASS()
class FORTNITEGAME_API UFortItemDefinition : public UMcpItemDefinitionBase
{
	//UFUNCTION(BlueprintCallable)
		//class UFortItem* CreateTemporaryItemInstanceBP(int Count, int Level);

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		EFortRarity Rarity;

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
		bool bForceAutoPickup;

	UPROPERTY(EditAnywhere)
		bool bInventorySizeLimited;

	UPROPERTY(EditAnywhere)
		FText ItemTypeNameOverride;

	UPROPERTY(EditAnywhere, AssetRegistrySearchable)
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
		class UTexture2D* WidePreviewImage;

	UPROPERTY(EditAnywhere)
		class UTexture2D* SmallPreviewImage;

	UPROPERTY(EditAnywhere)
		class UTexture2D* LargePreviewImage;

	UPROPERTY(EditAnywhere)
		FSoftObjectPath DisplayAssetPath;

	UPROPERTY(EditAnywhere)
		UFortItemSeriesDefinition* Series;

	UPROPERTY(EditAnywhere)
		FVector FrontendPreviewPivotOffset;

	UPROPERTY(EditAnywhere)
		FRotator FrontendPreviewInitialRotation;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UStaticMesh> FrontendPreviewMeshOverride;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<USkeletalMesh> FrontendPreviewSkeletalMeshOverride;

};
