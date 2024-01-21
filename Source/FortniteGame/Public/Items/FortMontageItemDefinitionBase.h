// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "GameplayTags.h"
#include "FortniteGame/FortniteGame.h"
#include "Items/FortItemAccessTokenType.h"
#include "Customization/FortCosmeticVariant.h"
#include "FortMontageItemDefinitionBase.generated.h"

/**
 * 
 */

USTRUCT()
struct  FMontageItemAccessData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FGameplayTag AccessTag;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		UFortItemAccessTokenType* AccessToken;
};

USTRUCT()
struct FSectionNameAndWeight 
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName SectionName; 

	UPROPERTY(EditAnywhere)
	float SectionWeight = 0.0f;
};


USTRUCT()
struct  FMontageVisibilityData
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		EMontageVisibilityRule Rule;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		UFortItemDefinition* Item;
};

USTRUCT(BlueprintType)
struct FFortEmoteMapping
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		EFortCustomBodyType BodyType;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		EFortCustomGender Gender;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> EmoteMontage;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortMontageItemDefinitionBase : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> Animation;

	UPROPERTY(EditAnywhere, meta = (AssetBundles = "AvatarDisplay"))
		TSoftObjectPtr<UAnimMontage> AnimationFemaleOverride;

	UPROPERTY(EditAnywhere, meta = (AssetBundles = "AvatarDisplay"))
		TArray<FFortEmoteMapping> AnimationOverrides;

	UPROPERTY(EditAnywhere)
		int32 PreviewLoops;

	UPROPERTY(EditAnywhere)
		float PreviewLength;

	UPROPERTY(EditAnywhere)
		bool bIncludeAudioWithAnimDuration;

	UPROPERTY(EditAnywhere)
		float EmoteCooldownSecs;

	UPROPERTY(EditAnywhere)
		bool bMontageContainsFacialAnimation;

	UPROPERTY(EditAnywhere)
		bool bPlayRandomSection;

	UPROPERTY(EditAnywhere)
		TArray<FSectionNameAndWeight> PlayRandomSectionByName;

	UPROPERTY(EditAnywhere)
		bool  bSwitchToHarvestingToolOnUse;

	UPROPERTY(EditAnywhere)
		bool bHolsterWeapon;

	UPROPERTY(EditAnywhere)
		bool bHolsterWeaponIfDualWieldPickaxe;

	UPROPERTY(EditAnywhere)
		TArray<FMontageItemAccessData> AccessData;

	UPROPERTY(EditAnywhere)
		TArray<FMontageVisibilityData> VisibilityData;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer EmoteWheelExclusiveTags;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAthenaCosmeticItemDefinition> RequiredEmoteParent;

	UPROPERTY(EditAnywhere)
		TArray<FMcpVariantChannelInfo> EmoteParentVariants;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer TagsWhichIndicateEmoteParent;

	UPROPERTY(EditAnywhere)
	    FText CustomBuiltInExclusiveCallout;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("Emote", GetFName());
	}
};