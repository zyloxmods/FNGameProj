// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Items/FortAccountItemDefinition.h"
#include "GameplayTags.h"
#include "Customization/FortCosmeticVariant.h"
#include "Particles/ParticleSystem.h"
#include "Customization/FortCosmeticVariant.h"
#include "AthenaCosmeticItemDefinition.generated.h"

class UAthenaCharacterItemDefinition;

USTRUCT(BlueprintType)
struct FFortStatManagerTag : public FGameplayTag
{
	GENERATED_BODY()

public:

};

USTRUCT(BlueprintType)
struct FAthenaCosmeticMaterialOverride
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FName ComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int MaterialOverrideIndex;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UMaterialInterface> OverrideMaterial;
};


USTRUCT(BlueprintType)
struct FFortCosmeticAdaptiveStatPair 
{

	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FFortStatManagerTag StatTag;

	UPROPERTY(EditAnywhere)
	int StatValue; 
};

USTRUCT(BlueprintType)
struct FFortCosmeticAdaptiveStatPreview
{

	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FText UnlockCondition;

	UPROPERTY(EditAnywhere)
	TArray<FFortCosmeticAdaptiveStatPair> StatValues; 
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UAthenaCosmeticItemDefinition : public UFortAccountItemDefinition
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		bool bIsShuffleTile;

	UPROPERTY(EditAnywhere)
		bool bIsOwnedByCampaignHero;

	UPROPERTY(EditAnywhere)
		bool bHasMoreThanOneCharacterPartVariant;

	UPROPERTY(EditAnywhere)
		bool bHideIfNotOwned;

	UPROPERTY(EditAnywhere)
		bool bInitializedConfiguredDynamicInstallBundles;

	UPROPERTY(EditAnywhere)
		bool bDynamicInstallBundlesError;

	UPROPERTY(EditAnywhere)
		bool bDynamicInstallBundlesComplete;

	UPROPERTY(EditAnywhere)
		double DynamicInstallBundlesUpdateStartTime;

	UPROPERTY(EditAnywhere)
	 int DynamicInstallBundleRequestRefCount;

	UPROPERTY(EditAnywhere)
	 int DynamicInstallBundleRequestRetryCount;

	UPROPERTY(EditAnywhere)
	    EVariantUnlockType VariantUnlockType;

	UPROPERTY(EditAnywhere)
		FRotator PreviewPawnRotationOffset;

	UPROPERTY(EditAnywhere)
		TArray<UObject*> FoleyLibraries;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer DisallowedCosmeticTags;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer MetaTags;

	UPROPERTY(EditAnywhere)
		TArray<FGameplayTag> VariantChannelsToNeverSendToMCP;

	//UPROPERTY(EditAnywhere)
	//TMap<FCosmeticVariantInfo, FSoftClassPath> ReactivePreviewDrivers;

	UPROPERTY(EditAnywhere)
		TArray<FAthenaCosmeticMaterialOverride> MaterialOverrides;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer ObservedPlayerStats;

//	UPROPERTY(EditAnywhere) forward declaration doesn't seem to work for this??
	//	TArray<UFortMontageItemDefinitionBase*> BuiltInEmotes;

	UPROPERTY(EditAnywhere, Instanced)
		TArray<UFortCosmeticVariant*> ItemVariants;

	UPROPERTY(EditAnywhere)
		FGameplayTag VariantChannelToUseForThumbnails;

	UPROPERTY(EditAnywhere)
		TArray<FFortCosmeticVariantPreview> ItemVariantPreviews;

	UPROPERTY(EditAnywhere)
		FText DirectAquisitionStyleDisclaimerOverride;

	UPROPERTY(EditAnywhere)
	TArray<FFortCosmeticAdaptiveStatPreview> ItemObservedStatPreviews;

	UPROPERTY(EditAnywhere)
		FText UnlockRequirements;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortAccountItemDefinition> UnlockingItemDef;

	UPROPERTY(EditAnywhere)
		FSoftClassPath ItemPreviewActorClass;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UFXSystemAsset> ItemPreviewParticleSystem;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> ItemPreviewMontage_Male;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> ItemPreviewMontage_Female;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAthenaCharacterItemDefinition> ItemPreviewHero;

	UPROPERTY(EditAnywhere)
		TArray<FName> ConfiguredDynamicInstallBundles;

	UPROPERTY(EditAnywhere)
		TArray<FName> PendingDynamicInstallBundles;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer ExclusiveRequiresOutfitTags;

	UPROPERTY(EditAnywhere)
		FText CustomExclusiveCallout;

	UPROPERTY(EditAnywhere)
		FText ExclusiveDescription;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> ExclusiveIcon;
};
