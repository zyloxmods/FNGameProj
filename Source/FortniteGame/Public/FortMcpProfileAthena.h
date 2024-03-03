#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "AthenaAccolades.h"
#include "AthenaMatchStats.h"
#include "AthenaSeasonRewardLevelInfo.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortMcpProfileSubgame.h"
#include "FortQuestObjectiveCompletion.h"
#include "HardcoreModifierUpdate.h"
#include "SecondaryXpGained.h"
#include "FortMcpProfileAthena.generated.h"

class UAthenaSeasonItemDefinition;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class FORTNITEGAME_API UFortMcpProfileAthena : public UFortMcpProfileSubgame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientQuestLoginTimerNoise;
    
public:
  /*  UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void UnlockRewardNode(const FString& NodeId, const FString& rewardGraphId, const FString& rewardCfg, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void ToggleQuestActiveState(const TArray<FString>& QuestIds, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetRewardGraphConfig(const TArray<FString>& State, const FString& rewardGraphId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetHardcoreModifier(const TArray<FHardcoreModifierUpdate>& Updates, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void RequestRestedStateIncrease(int32 timeToCompensateFor, int32 restedXpGenAccumulated, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void ReportConsumableUsed(int32 UsedQuantity, const FString& ItemType, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    */
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPurchasedSeasonBook() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleActiveEventFlagsChanged(const TArray<FString>& ActiveEventFlags);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSeasonRestedXpMult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSeasonRestedXpExchange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonRestedXp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonOverflowXp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonMatchXpBoost() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSeasonLevelUpReward(int32 SeasonLevel, FFortItemInstanceQuantityPair& Reward, int32& RewardLevel);
    
    UFUNCTION(BlueprintCallable)
    FAthenaSeasonRewardLevelInfo GetSeasonLevelInfo(int32 SeasonLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonFriendMatchXpBoost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonBookLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaSeasonItemDefinition* GetActiveSeasonDefinition() const;
    
  /*  UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void ExchangeGiftToken(UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void EndBattleRoyaleGame(const TArray<FFortQuestObjectiveCompletion>& Advance, const FString& PlaylistId, const FAthenaMatchStats& MatchStats, int32 TotalXPAccum, int32 RestedXPAccum, int32 FriendshipXpBoost, int32 CosmeticXpBoost, float AntiAddictionPlayTimeMultiplier, bool ShouldAccumulateToProfileStats, bool ShouldSaveToRecentGameLists, const TArray<FAthenaAccolades>& Accolades, const TArray<FString>& ShuffledLoadoutUsed, int32 ShuffledLockerUsedIndex, const TArray<FString>& GrantedQuestDefs, const TArray<FSecondaryXpGained>& secondaryXp, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void ChallengeBundleLevelUp(const FString& BundleIdToLevel, UPARAM(NotReplicated) FClientUrlContext& Context);
    */
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPurchaseSeasonBook() const;
    
 //   UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
   // void ApplyVote(const FString& OfferId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
};

