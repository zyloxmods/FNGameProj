// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "GameplayTags.h"
#include "FortniteGame/FortniteGame.h"
#include "Items/FortItemAccessTokenType.h"
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

	UPROPERTY(EditAnywhere)
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
	float SectionWeight;
};


USTRUCT()
struct  FMontageVisibilityData
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		EMontageVisibilityRule Rule;

	UPROPERTY(EditAnywhere)
		UFortItemDefinition* Item;
};

USTRUCT(BlueprintType)
struct FFortEmoteMapping
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
		EFortCustomBodyType BodyType;

	UPROPERTY(EditAnywhere)
		EFortCustomGender Gender;
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
		int PreviewLoops;

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
		FGameplayTagContainer TagsWhichIndicateEmoteParent;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("Emote", GetFName());
	}
};