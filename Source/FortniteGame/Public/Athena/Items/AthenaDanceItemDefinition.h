// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Items/FortMontageItemDefinitionBase.h"
#include "FortniteGame/FortniteGame.h"
#include "AthenaDanceItemDefinition.generated.h"


USTRUCT()
struct  FVariantSwapMontagePartRequirement
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EFortCustomPartType> PartType;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UCustomCharacterPart> Part;
	
};

USTRUCT()
struct  FVariantSwapMontageActiveSwapsRequirement
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TArray<FMcpVariantChannelInfo> VariantSelections;                                        

	UPROPERTY(EditAnywhere)
	 UFortItemDefinition* Item;
	
};

USTRUCT()
struct  FVariantSwapMontageData
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	FName MontageSectionName;
	
    UPROPERTY(EditAnywhere)
	EMontageSelectionPredicateType EvaluationMode;

	UPROPERTY(EditAnywhere)
	FGameplayTag VariantMetaTagRequired;

	UPROPERTY(EditAnywhere)
	bool bRequireCharacterPart = true;

	UPROPERTY(EditAnywhere)
	TArray<FVariantSwapMontagePartRequirement>  PartRequirements;                                         // 0x0010(0x0010) (Edit, ZeroConstructor)

	UPROPERTY(EditAnywhere)
	TArray<FVariantSwapMontageActiveSwapsRequirement> SwapRequirements;
	
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UAthenaDanceItemDefinition : public UFortMontageItemDefinitionBase
{
	GENERATED_BODY()
		
public:

	UPROPERTY(EditAnywhere)
		bool bUsesSecondaryFireInput;

	UPROPERTY(EditAnywhere)
		bool bMovingEmote;

	UPROPERTY(EditAnywhere)
		bool bMovingEmoteSkipLandingFX;

	UPROPERTY(EditAnywhere)
		bool bMoveForwardOnly;

	UPROPERTY(EditAnywhere)
		bool bMoveFollowingOnly;

	UPROPERTY(EditAnywhere)
		bool bGroupEmote;

	UPROPERTY(EditAnywhere)
		bool bUseHighPreviewCamera;

	UPROPERTY(EditAnywhere) 
		bool bGroupAnimationSync;

	UPROPERTY(EditAnywhere)
		bool bAllowLowerBodyLocomotion;

	UPROPERTY(EditAnywhere)
		float WalkForwardSpeed;

	UPROPERTY(EditAnywhere)
		float GroupSyncAnimOffset;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAthenaDanceItemDefinition> GroupEmoteToStartLeader;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAthenaDanceItemDefinition> GroupEmoteToStartFollower;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAthenaDanceItemDefinition> GroupEmoteToStartLeaderIfBothOwn;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAthenaDanceItemDefinition> GroupEmoteToStartFollowerIfBothOwn;

	UPROPERTY(EditAnywhere)
		TArray<FVariantSwapMontageData> MotageSelectionGroups;

	UPROPERTY(EditAnywhere)
		FVector GroupEmotePositionOffset;

	UPROPERTY(EditAnywhere)
		float GroupEmotePositionOffsetTolerance;

	UPROPERTY(EditAnywhere)
		float GroupEmoteFollowDistance;

	UPROPERTY(EditAnywhere)
		bool bLockGroupEmoteLeaderRotation;

	UPROPERTY(EditAnywhere)
		float GroupEmoteLeaderRotationYawOffset;

	UPROPERTY(EditAnywhere)
		float GroupEmoteFollowerRotationYawOffset;

	UPROPERTY(EditAnywhere, meta = (AssetBundles = "AvatarDisplay"))
		TSoftObjectPtr<UAnimMontage> FrontEndAnimation;

	UPROPERTY(EditAnywhere, meta = (AssetBundles = "AvatarDisplay"))
		TSoftObjectPtr<UAnimMontage> FrontEndAnimationFemaleOverride;

	UPROPERTY(EditAnywhere)
	TArray<FFortEmoteMapping> FrontEndAnimationOverrides;

	UPROPERTY(EditAnywhere)
		bool bUseMetaTagsFromPickaxeActor;

	UPROPERTY(EditAnywhere)
		TSoftClassPtr<UObject> CustomDanceAbility;

	UPROPERTY(EditAnywhere)
		FText ChatTriggerCommandName;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("AthenaDance", GetFName());
	}
};
