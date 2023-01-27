// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Items/FortAccountItemDefinition.h"
#include "GameplayTags.h"
#include "FortniteGame/FortniteGame.h"
#include "Heroes/FortTokenType.h"
//#include "Items/FortWorldItemDefinition"
#include "Items/FortMedalsPunchCardItemDefinition.h"
#include "Items/FortQuestItemDefinition.h"
#include "Items/FortItemDefinition.h"
#include "Items/FortGiftBoxItemDefinition.h"
#include "AthenaSeasonItemDefinition.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortGiftBoxFortmatData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FString StringAssetType;

	UPROPERTY(EditAnywhere)
		FString StringData;
};

USTRUCT()
struct FTrackDynamicBackground
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> BackgroundSubstance;

	UPROPERTY(EditAnywhere)
		FLinearColor PrimaryColor;

	UPROPERTY(EditAnywhere)
		FLinearColor SecondaryColor;

	UPROPERTY(EditAnywhere)
		FLinearColor TertiaryColor;

	UPROPERTY(EditAnywhere)
		bool bIsSpecial;

	UPROPERTY(EditAnywhere)
		bool bIsFoil;

	UPROPERTY(EditAnywhere)
		int MinimalDiscoveryLevel;
};

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FChallengeGiftBoxData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortGiftBoxItemDefinition> GiftBoxToUse;

	UPROPERTY(EditAnywhere)
		TArray<FFortGiftBoxFortmatData> GiftBoxFormatData;
};
USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAthenaRewardItemReference
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortItemDefinition> ItemDefinition;

	UPROPERTY(EditAnywhere)
		FString TemplateId;

	UPROPERTY(EditAnywhere)
		int Quantity;

	UPROPERTY(EditAnywhere)
		FChallengeGiftBoxData RewardGiftBox;

	UPROPERTY(EditAnywhere)
		bool IsChaseReward;

	UPROPERTY(EditAnywhere)
		EAthenaRewardItemType RewardType;

	UPROPERTY(EditAnywhere)
		EAthenaRewardVisualImportanceType RewardVisualImportanceType;
};

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAthenaRewardScheduleLevel
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FAthenaRewardItemReference> Rewards;

};

USTRUCT(BlueprintType)
struct FAthenaRewardSchedule
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FAthenaRewardScheduleLevel> Levels;
};

USTRUCT()
struct  FTrackCategory
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UObject> CategoryIcon;

	UPROPERTY(EditAnywhere)
		FText CategoryName;

	UPROPERTY(EditAnywhere)
		int CategoryStartingLevel;
};

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAthenaMidSeasonUpdateItemReq
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortItemDefinition> Item;

	UPROPERTY(EditAnywhere)
		int Count;
};

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAthenaMidSeasonUpdateQuestReq
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UFortQuestItemDefinition> Quest; 

	UPROPERTY(EditAnywhere)
		bool bCompletionRequired;
};

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAthenaMidSeasonUpdate
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		int SeasonLevelRequirement;

	UPROPERTY(EditAnywhere)
		int BookLevelRequirement;

	UPROPERTY(EditAnywhere)
		bool SeasonPurchasedRequirement;

	UPROPERTY(EditAnywhere)
		TArray<FAthenaMidSeasonUpdateItemReq> ItemRequirements;

	UPROPERTY(EditAnywhere)
		TArray<FAthenaMidSeasonUpdateQuestReq> QuestRequirements;

	UPROPERTY(EditAnywhere)
		FAthenaRewardScheduleLevel Grants;

	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UFortItemDefinition>> Removals;
};
USTRUCT(BlueprintType)
struct FAthenaSeasonBannerLevel 
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> SurroundImage;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UMaterialInterface> BannerMaterial; 
};

USTRUCT(BlueprintType)
struct FAthenaSeasonBannerLevelSchedule 
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TArray<FAthenaSeasonBannerLevel> Levels; 
};

USTRUCT(BlueprintType)
struct FXpDisplayConversion
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortItemDefinition> XpItemDef;

	UPROPERTY(EditAnywhere)
		int ValueToReplaceAt;
};

UCLASS(BlueprintType)
class UFortCollectionDataEntry : public UObject
{

	GENERATED_BODY()

public:

};

UCLASS(BlueprintType)
class UFortCollectionData : public UDataAsset
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TArray<UFortCollectionDataEntry*> Entries;

};

USTRUCT(BlueprintType)
struct FFortCollectionDataMapping 
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 FString CollectionType; 

	UPROPERTY(EditAnywhere)
	bool bEnsureAllTaggedItemsAreInTheCollection; 

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UFortCollectionData> Collection;
};

UCLASS(BlueprintType)
class UFortCollectionsDataTable : public UDataAsset
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TArray<FFortCollectionDataMapping> Collections;

};

UCLASS(BlueprintType)
class FORTNITEGAME_API UAthenaSeasonItemDefinition : public UFortAccountItemDefinition
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		bool bXpOnlySeason;

	UPROPERTY(EditAnywhere)
		bool bUseAccoladePunchCard;

	UPROPERTY(EditAnywhere)
		UDataTable* SeasonXpOnlyExtendedCurve;
	
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortMedalsPunchCardItemDefinition> DailyPunchCard;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortRepeatableDailiesCardItemDefinition> RepeatableDailiesCard;
		
	UPROPERTY(EditAnywhere)
		int RestedXpDailyGrant;

	UPROPERTY(EditAnywhere)
		int RestedXpMaxAccrue;

	UPROPERTY(EditAnywhere)
		float RestedXpMultiplier;

	UPROPERTY(EditAnywhere)
		int SeasonStartCalendarOffsetDays;

	UPROPERTY(EditAnywhere)
		int SeasonNumber;

	UPROPERTY(EditAnywhere)
		int NumSeasonLevels;

	UPROPERTY(EditAnywhere)
		int NumBookLevels;

	UPROPERTY(EditAnywhere)
		int NumAdditionalBookLevels;

	UPROPERTY(EditAnywhere)
		EAthenaSeasonShopVisibility SeasonShopVisibility;

	UPROPERTY(EditAnywhere)
		EAthenaChallengeTabVisibility ChallengesVisibility;

	UPROPERTY(EditAnywhere)
		UDataTable* SeasonXpCurve;

	UPROPERTY(EditAnywhere)
		UDataTable* BookXpCurve;

	UPROPERTY(EditAnywhere)
		FString SeasonStorefront;

	UPROPERTY(EditAnywhere)
		FString BattlePassOfferId;

	UPROPERTY(EditAnywhere)
		TArray<FString> BattlePassOfferIds;

	UPROPERTY(EditAnywhere)
		FString BattlePassLevelOfferID;

	UPROPERTY(EditAnywhere)
		TArray<FString> BattlePassLevelOfferIDs;

	UPROPERTY(EditAnywhere)
		TArray<FPrimaryAssetId> FreeTokenItemPrimaryAssetIds;

	UPROPERTY(EditAnywhere)
		TArray<int> FreeLevelsThatNavigateToBattlePass;

	UPROPERTY(EditAnywhere)
		TArray<int> FreeLevelsThatAutoOpenTheAboutScreen;

	UPROPERTY(EditAnywhere)
		TArray<FTrackCategory> TrackCategories;

	UPROPERTY(EditAnywhere)
		TArray<FTrackDynamicBackground> TrackPageBackgrounds;

	UPROPERTY(EditAnywhere)
		FAthenaRewardSchedule SeasonXpScheduleFree;

	UPROPERTY(EditAnywhere)
		FGameplayTag FreeSeasonItemContentTag;

	UPROPERTY(EditAnywhere)
		FAthenaRewardSchedule BookXpScheduleFree;

	UPROPERTY(EditAnywhere)
		FGameplayTag BattlePassFreeItemContentTag;

	UPROPERTY(EditAnywhere)
		FAthenaRewardSchedule BookXpSchedulePaid;

	UPROPERTY(EditAnywhere)
		FGameplayTag BattlePassPaidItemContentTag;

	UPROPERTY(EditAnywhere)
		FAthenaRewardSchedule AdditionalBookSchedule;

	UPROPERTY(EditAnywhere)
		FGameplayTag BattlePassAdditionalItemContentTag;
	
   UPROPERTY(EditAnywhere)
	FAthenaSeasonBannerLevelSchedule SeasonBannerSchedule;

   //UPROPERTY(EditAnywhere)
   //class UFortChallengeBundleItemDefinition* SeasonalGlyphChallengeBundle;
   
	UPROPERTY(EditAnywhere)
		FString GlyphTokenTemplateId;

	UPROPERTY(EditAnywhere)
		class UDataTable* SeasonalGlyphRewards;

	UPROPERTY(EditAnywhere)
	 UFortChallengeBundleScheduleDefinition* ChallengeSchedulePaid;

	UPROPERTY(EditAnywhere)
	TArray<UFortChallengeBundleScheduleDefinition*> ChallengeSchedulesAlwaysShown;

	UPROPERTY(EditAnywhere)
	 FAthenaRewardScheduleLevel SeasonGrantsToEveryone;
	 
	UPROPERTY(EditAnywhere)
		FGameplayTag SeasonGrantsToEveryoneItemContentTag;

    UPROPERTY(EditAnywhere)
	FAthenaRewardScheduleLevel SeasonFirstWinRewards;
	
	UPROPERTY(EditAnywhere)
		FGameplayTag SeasonFirstWinItemContentTag;

	UPROPERTY(EditAnywhere)
	FAthenaRewardScheduleLevel BattleStarSubstitutionReward;

	UPROPERTY(EditAnywhere)
	TArray<FXpDisplayConversion> XpDisplayOverride;
	
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortItemDefinition> XpItemDef;

	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr< UFortItemDefinition>> ExpiringRewardTypes;

	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UFortItemDefinition>> TokensToRemoveAtSeasonEnd;
	
	UPROPERTY(EditAnywhere)
	TArray<FAthenaMidSeasonUpdate> MidSeasonUpdates;
	
	UPROPERTY(EditAnywhere)
		bool bRemoveAllDailyQuestsAtSeasonEnd;
	
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortTokenType> NoBattleBundleToken;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortCollectionsDataTable> CollectionsDataTable;
		
	UPROPERTY(EditAnywhere)
		UDataTable* NPCConversationQuests;

	UPROPERTY(EditAnywhere)
		TArray<FGameplayTag> FirstTimeTrackedBitFlags;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("AthenaSeason", GetFName());
	}
};