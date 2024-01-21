// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Items/FortAccountItemDefinition.h"
#include "GameplayTags.h"
#include "FortniteGame/FortniteGame.h"
//#include "Items/FortWorldItemDefinition"
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

USTRUCT(BlueprintType)
struct FTrackDynamicBackground
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> BackgroundSubstance;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		FLinearColor PrimaryColor;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		FLinearColor SecondaryColor;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		FLinearColor TertiaryColor;

	UPROPERTY(EditAnywhere)
		bool bIsSpecial = false;

	UPROPERTY(EditAnywhere)
		bool bIsFoil = false;

	UPROPERTY(EditAnywhere)
		int MinimalDiscoveryLevel = 0;
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
	int Quantity = 0; 

	UPROPERTY(EditAnywhere)
	FChallengeGiftBoxData RewardGiftBox; 

	UPROPERTY(EditAnywhere)
	bool IsChaseReward = false;

	UPROPERTY(EditAnywhere)
		EAthenaRewardItemType RewardType = EAthenaRewardItemType::HiddenReward;

	UPROPERTY(EditAnywhere)
	EAthenaRewardVisualImportanceType RewardVisualImportanceType = EAthenaRewardVisualImportanceType::Normal;
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

USTRUCT(BlueprintType)
struct  FTrackCategory
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UObject> CategoryIcon;

	UPROPERTY(EditAnywhere)
		FText CategoryName;

	UPROPERTY(EditAnywhere)
		int CategoryStartingLevel = 0;
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

	//Missed Offset

	UPROPERTY(EditAnywhere)
		UDataTable* SeasonXpOnlyExtendedCurve;
	/*
	UPROPERTY(EditAnywhere)
		UFortMedalsPunchCardItemDefinition* DailyPunchCard;

	UPROPERTY(EditAnywhere)
		UFortRepeatableDailiesCardItemDefinition* RepeatableDailiesCard;
*/
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

	//Missed Offset

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
	/*
   UPROPERTY(EditAnywhere)
	FAthenaSeasonBannerLevelSchedule SeasonBannerSchedule;
   UPROPERTY(EditAnywhere)
   class UFortChallengeBundleItemDefinition* SeasonalGlyphChallengeBundle;
   */
	UPROPERTY(EditAnywhere)
		FString GlyphTokenTemplateId;

	UPROPERTY(EditAnywhere)
		class UDataTable* SeasonalGlyphRewards;


	/*
	UPROPERTY(EditAnywhere)
	class UFortChallengeBundleScheduleDefinition* ChallengeSchedulePaid;
	UPROPERTY(EditAnywhere)
	TArray<UFortChallengeBundleScheduleDefinition*> ChallengeSchedulesAlwaysShown;
	UPROPERTY(EditAnywhere)
	 FAthenaRewardScheduleLevel SeasonGrantsToEveryone;
	 */
	UPROPERTY(EditAnywhere)
		FGameplayTag SeasonGrantsToEveryoneItemContentTag;

	/*
   UPROPERTY(EditAnywhere)
	FAthenaRewardScheduleLevel SeasonFirstWinRewards;
	*/
	UPROPERTY(EditAnywhere)
		FGameplayTag SeasonFirstWinItemContentTag;

	/*
	UPROPERTY(EditAnywhere)
	FAthenaRewardScheduleLevel BattleStarSubstitutionReward;
	UPROPERTY(EditAnywhere)
	TArray<FXpDisplayConversion> XpDisplayOverride;
	*/
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortItemDefinition> XpItemDef;

	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr< UFortItemDefinition>> ExpiringRewardTypes;

	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UFortItemDefinition>> TokensToRemoveAtSeasonEnd;
	/*
	UPROPERTY(EditAnywhere)
	TArray<FAthenaMidSeasonUpdate> MidSeasonUpdates;
	*/
	UPROPERTY(EditAnywhere)
		bool bRemoveAllDailyQuestsAtSeasonEnd;

	//Missed Offset

	UPROPERTY(EditAnywhere)
		TArray<FGameplayTag> FirstTimeTrackedBitFlags;

};