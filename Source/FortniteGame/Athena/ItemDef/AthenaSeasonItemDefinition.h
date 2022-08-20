// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "GamePlayTags.h"
#include "UObject/PrimaryAssetId.h"
#include "../../ItemDef/FortMedalsPunchCardItemDefinition.h"
#include "../../ItemDef/FortRepeatableDailiesCardItemDefinition.h"
#include "../../Enum/EAthenaChallengeTabVisibility.h" 
#include "../../Enum/EAthenaSeasonShopVisibility.h" 
#include "../../Data/TrackCategory.h"
#include "../../Data/TrackDynamicBackground.h"
#include "../../ItemDef/FortAccountItemDefinition.h"
#include "AthenaSeasonItemDefinition.generated.h"

UCLASS()
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

	UPROPERTY(EditAnywhere)
		UFortMedalsPunchCardItemDefinition* DailyPunchCard;

	UPROPERTY(EditAnywhere)
		UFortRepeatableDailiesCardItemDefinition* RepeatableDailiesCard;

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



	//UPROPERTY(EditAnywhere)
	//TArray<FAthenaRewardSchedule> SeasonXpScheduleFree;

	/*
	UPROPERTY(EditAnywhere)
	FAthenaRewardSchedule SeasonXpScheduleFree;   
	*/
	UPROPERTY(EditAnywhere)
	 FGameplayTag FreeSeasonItemContentTag;         
	 /*
	UPROPERTY(EditAnywhere)
	 FAthenaRewardSchedule BookXpScheduleFree;    
	 */
	UPROPERTY(EditAnywhere)
	 FGameplayTag BattlePassFreeItemContentTag;     
	 /*
	UPROPERTY(EditAnywhere)
	 FAthenaRewardSchedule BookXpSchedulePaid;             
	 */
	UPROPERTY(EditAnywhere)
	 FGameplayTag BattlePassPaidItemContentTag;     
	 /*
	UPROPERTY(EditAnywhere)
	 FAthenaRewardSchedule AdditionalBookSchedule;      
	 */
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
