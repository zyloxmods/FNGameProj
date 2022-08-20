// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../ItemDef/FortAccountItemDefinition.h"
#include "../../Enum/EVariantUnlockType.h"
#include "../../Variants/FortCosmeticVariant.h"
#include "../../Variants/AthenaCosmeticMaterialOverride.h"
#include "../../Variants/FortCosmeticVariant.h"
#include "../../Variants/FortCosmeticVariantPreview.h"
#include "AthenaCosmeticItemDefinition.generated.h"

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

	UPROPERTY(EditAnywhere)
		TArray<FAthenaCosmeticMaterialOverride> MaterialOverrides;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer ObservedPlayerStats;

	UPROPERTY(EditAnywhere)
		TArray<UObject*> BuiltInEmotes;

	UPROPERTY(EditAnywhere, Instanced)
		TArray<UFortCosmeticVariant*> ItemVariants;

	UPROPERTY(EditAnywhere)
		FGameplayTag VariantChannelToUseForThumbnails;

	UPROPERTY(EditAnywhere)
		TArray<FortCosmeticVariantPreview> ItemVariantPreviews;

	UPROPERTY(EditAnywhere)
		FText DirectAquisitionStyleDisclaimerOverride;

	// ItemObservedStatPreviews

	UPROPERTY(EditAnywhere)
		FText UnlockRequirements;

	UPROPERTY(EditAnywhere)
		FSoftObjectPath UnlockingItemDef;

	UPROPERTY(EditAnywhere)
		FSoftClassPath ItemPreviewActorClass;


	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> ItemPreviewMontage_Male;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> ItemPreviewMontage_Female;

	//UPROPERTY(EditAnywhere)
	//	TSoftObjectPtr<UAthenaCharacterItemDefinition> ItemPreviewHero;

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
		FSoftObjectPath ExclusiveIcon;
};