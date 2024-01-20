#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "AthenaMatchStats.h"
#include "AthenaSeasonRewardLevelInfo.h"
#include "EAthenaCustomizationCategory.h"
#include "FortAthenaLoadoutData.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortMcpProfileSubgame.h"
#include "FortQuestObjectiveCompletion.h"
#include "McpVariantReader.h"
#include "FortMcpProfileAthena.generated.h"

class UAthenaSeasonItemDefinition;
class UFortQuestItem;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpProfileAthena : public UFortMcpProfileSubgame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortQuestItem* PartyAssistedQuest;
    
public:
    UFortMcpProfileAthena();
   /* UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null)
    void SetPartyAssistQuest(const FString& QuestToPinAsPartyAssist, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null)
    void SetCompetitiveRegion(const FString& NewlySelectedRegionId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null)
    void SetBattleRoyaleBanner(const FString& HomebaseBannerIconId, const FString& HomebaseBannerColorId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null)
    void ReportConsumableUsed(int32 UsedQuantity, const FString& ItemType, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPurchasedSeasonBook() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleActiveEventFlagsChanged(const TArray<FString>& ActiveEventFlags);
    
public:
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
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null)
    void EquipBattleRoyaleCustomization(EAthenaCustomizationCategory SlotName, const FString& ItemToSlot, int32 IndexWithinSlot, const TArray<FMcpVariantReader>& VariantUpdates, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null)
    void EndBattleRoyaleGame(const TArray<FFortQuestObjectiveCompletion>& Advance, const FString& PlaylistId, const FAthenaMatchStats& MatchStats, int32 FriendshipXpBoost, int32 CosmeticXpBoost, float AntiAddictionPlayTimeMultiplier, bool ShouldAccumulateToProfileStats, bool ShouldSaveToRecentGameLists, const TArray<FString>& Medals, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPurchaseSeasonBook() const;
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null)
    void BulkEquipBattleRoyaleCustomization(const TArray<FFortAthenaLoadoutData>& LoadoutData, UPARAM(NotReplicated) FClientUrlContext& Context);
    */
};

