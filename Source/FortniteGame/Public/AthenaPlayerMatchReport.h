#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AthenaLevelInfo.h"
#include "AthenaMatchLootReward.h"
#include "AthenaMatchStats.h"
#include "AthenaMatchTeamStats.h"
#include "AthenaMatchXpReward.h"
#include "AthenaRewardResult.h"
#include "AthenaTravelRecord.h"
#include "OnTravelLogUpdatedDelegate.h"
#include "AthenaPlayerMatchReport.generated.h"

UCLASS(Blueprintable)
class UAthenaPlayerMatchReport : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDataAvailableEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataAvailableEvent OnRewardsAvailable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataAvailableEvent OnStatsAvailable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataAvailableEvent OnTeamStatsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaLevelInfo InitialLevelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMatchStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaMatchStats MatchStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasTeamStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaMatchTeamStats TeamStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaRewardResult EndOfMatchResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaTravelRecord TravelRecord;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTravelLogUpdated TravelLogUpdated;
    
    UAthenaPlayerMatchReport();
    UFUNCTION(BlueprintCallable)
    void GetXpRewards(TArray<FAthenaMatchXpReward>& XpRewards);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalSeasonalXpEarned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalScoreEarned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalBookXpEarned() const;
    
    UFUNCTION(BlueprintCallable)
    void GetLootRewards(TArray<FAthenaMatchLootReward>& LootRewards);
    
};

