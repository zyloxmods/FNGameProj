#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "AccountIdAndMatchEndData.h"
#include "AccountIdAndScore.h"
#include "ECampaignCustomizationCategory.h"
#include "EndZoneScoreAndAwards.h"
#include "FortMcpProfileSubgame.h"
#include "FortPersistentGameplayStatValue.h"
#include "FortQuestEarnedBadgeData.h"
#include "FortQuestObjectiveCompletion.h"
#include "FortMcpProfileCampaign.generated.h"

class UFortCampaignHeroLoadoutItem;
class UFortMcpProfileCampaign;

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API UFortMcpProfileCampaign : public UFortMcpProfileSubgame {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDifferentHeroLoadoutActivated, UFortMcpProfileCampaign*, Profile);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDifferentHeroLoadoutActivated OnDifferentHeroLoadoutActivated;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHeroLoadoutMocking;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeroLoadoutCommandDelaySeconds;
    
public:
    UFortMcpProfileCampaign();
  /*  UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void UpgradeItemRarity(const FString& TargetItemId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void UpgradeItem(const FString& TargetItemId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void UpgradeAlteration(const FString& TargetItemId, int32 AlterationSlot, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void UpdateBuildingLevelAndRating(const FString& BuildingId, int32 LastBuildingLevel, int32 LastBuildingRating, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void UnslotItemFromCollectionBook(const FString& ItemId, const FString& Specific, const FString& TemplateId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void UnslotAllWorkers(const TArray<FString>& BuildingIds, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void UnloadWarehouse(const TArray<FString>& ResourceTypes, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void UnassignAllSquads(const TArray<FString>& SquadIds, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void TransmogItem(const FString& TransmogKeyTemplateId, const TArray<FString>& SacrificeItemIds, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void StartPrimaryMission(const TArray<FFortQuestObjectiveCompletion>& Advance, const FString& MatchmakingSessionId, const FString& MissionName, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void StartExpedition(const FString& ExpeditionId, const FString& SquadId, const TArray<FString>& ItemIds, const TArray<int32>& SlotIndices, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void SlotItemInCollectionBook(const FString& ItemId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void SkipTutorial(UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void SetLoadoutName(const FString& LoadoutName, const FString& LoadoutId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void SetGameplayStats(const TArray<FFortPersistentGameplayStatValue>& GameplayStats, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void SetActiveHeroLoadout(const FString& SelectedLoadout, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void RespecUpgrades(UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void RespecResearch(UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void RespecAlteration(const FString& TargetItemId, int32 AlterationSlot, const FString& AlterationId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void ResearchItemFromCollectionBook(const FString& TemplateId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void RefundItem(const FString& TargetItemId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void RefreshExpeditions(UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void RecycleItemBatch(const TArray<FString>& TargetItemIds, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void RecycleItem(const FString& TargetItemId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void PurchaseResearchStatUpgrade(const FString& StatId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void PurchaseOrUpgradeHomebaseNode(const FString& NodeId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void PopulatePrerolledOffers(UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void OpenCardPackBatch(const TArray<FString>& CardPackItemIds, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void OpenCardPack(const FString& CardPackItemId, int32 SelectionIdx, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void ModifyMission(const FString& MatchmakingSessionId, const FString& Difficulty, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFortCampaignHeroLoadoutItem*> GetOrderedHeroLoadoutItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentHeroLoadoutItem(UFortCampaignHeroLoadoutItem*& OutCampaignHeroLoadoutItem) const;
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void FailsafeSaveMissionResults(const FEndZoneScoreAndAwards& PlayerScoreData, const FString& MatchmakingSessionId, const FString& MissionName, const FString& MissionStatus, int32 DifficultyIncreaseTier, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void EquipCampaignCustomization(ECampaignCustomizationCategory SlotName, const FString& ItemToSlot, int32 IndexWithinSlot, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void EndPrimaryMission(const TArray<FFortQuestObjectiveCompletion>& Advance, const FString& MatchmakingSessionId, const FString& MissionName, const FString& MissionStatus, const TArray<FFortQuestEarnedBadgeData>& EarnedBadgeData, const TArray<FString>& EarnedItemCaches, int32 DifficultyIncreaseTier, int32 NumMissionPoints, bool bCriticalMatchBonus, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void EndMatch(const TArray<FAccountIdAndMatchEndData>& PlayersAndMatchEndData, const FString& MatchmakingSessionId, const FString& MissionName, const FString& MissionStatus, int32 DifficultyIncreaseTier, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void EarnScore(const TArray<FAccountIdAndScore>& PlayersAndScores, const FString& MatchmakingSessionId, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void ConvertLegacyAlterations(const FString& TargetItemId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void ConvertItem(const FString& TargetItemId, int32 ConversionIndex, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void ConsumeItems(const TArray<FString>& ItemsToConsumeIds, const TArray<int32>& ItemCountsToConsume, const FString& ConsumeReason, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void CollectExpedition(const FString& ExpeditionTemplate, const FString& ExpeditionId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void ClearHeroLoadout(const FString& LoadoutId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void ClaimMissionAlertRewards(UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void ClaimLoginReward(UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void ClaimDifficultyIncreaseRewards(UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void ClaimCollectionBookRewards(int32 RequiredXp, int32 SelectedRewardIndex, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void ClaimCollectedResources(const TArray<FString>& CollectorsToClaim, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void AssignWorkerToSquadBatch(const TArray<FString>& CharacterIds, const TArray<FString>& SquadIds, const TArray<int32>& SlotIndices, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void AssignWorkerToSquad(const FString& CharacterId, const FString& SquadId, int32 SlotIndex, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void AssignTeamPerkToLoadout(const FString& TeamPerkId, const FString& LoadoutId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void AssignHeroToLoadout(const FString& HeroId, const FString& LoadoutId, const FString& SlotName, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void AssignGadgetToLoadout(const FString& GadgetId, const FString& LoadoutId, int32 SlotIndex, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void ApplyAlteration(const FString& TargetItemId, const FString& AlterationItemId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void ActivateConsumable(const FString& TargetItemId, const FString& TargetAccountId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void AbandonExpedition(const FString& ExpeditionId, UPARAM(NotReplicated) FClientUrlContext& Context);
    */
};

