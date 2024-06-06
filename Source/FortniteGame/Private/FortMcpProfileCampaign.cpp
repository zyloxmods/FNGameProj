#include "FortMcpProfileCampaign.h"
/*
void UFortMcpProfileCampaign::UpgradeItemRarity_Implementation(const FString& TargetItemId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::UpgradeItemBulk_Implementation(const FString& TargetItemId, int32 DesiredLevel, const FString& DesiredTier, int32 ConversionRecipeIndexChoice, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::UpgradeItem_Implementation(const FString& TargetItemId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::UpgradeAlteration_Implementation(const FString& TargetItemId, int32 AlterationSlot, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::UpdateBuildingLevelAndRating_Implementation(const FString& BuildingId, int32 LastBuildingLevel, int32 LastBuildingRating, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::UnslotItemFromCollectionBook_Implementation(const FString& ItemId, const FString& Specific, const FString& TemplateId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::UnslotAllWorkers_Implementation(const TArray<FString>& BuildingIds, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::UnloadWarehouse_Implementation(const TArray<FString>& ResourceTypes, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::UnassignAllSquads_Implementation(const TArray<FString>& SquadIds, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::TransmogItem_Implementation(const FString& TransmogKeyTemplateId, const TArray<FString>& SacrificeItemIds, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::StartPrimaryMission_Implementation(const TArray<FFortQuestObjectiveCompletion>& Advance, const FString& MatchmakingSessionId, const FString& MissionName, FDedicatedServerUrlContext& Context) {
}

void UFortMcpProfileCampaign::StartExpedition_Implementation(const FString& ExpeditionId, const FString& SquadId, const TArray<FString>& ItemIds, const TArray<int32>& SlotIndices, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::SlotItemInCollectionBook_Implementation(const FString& ItemId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::SkipTutorial_Implementation(FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::SetLoadoutName_Implementation(const FString& LoadoutName, const FString& LoadoutId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::SetHeroCosmeticVariants_Implementation(const FString& HeroItem, const TArray<FMcpVariantReader>& OutfitVariants, const TArray<FMcpVariantReader>& BackblingVariants, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::SetGameplayStats_Implementation(const TArray<FFortPersistentGameplayStatValue>& GameplayStats, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::SetActiveHeroLoadout_Implementation(const FString& SelectedLoadout, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::RespecUpgrades_Implementation(FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::RespecResearch_Implementation(FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::RespecAlteration_Implementation(const FString& TargetItemId, int32 AlterationSlot, const FString& AlterationId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::ResearchItemFromCollectionBook_Implementation(const FString& TemplateId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::RefundItem_Implementation(const FString& TargetItemId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::RefreshExpeditions_Implementation(FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::RecycleItemBatch_Implementation(const TArray<FString>& TargetItemIds, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::RecycleItem_Implementation(const FString& TargetItemId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::PurchaseResearchStatUpgrade_Implementation(const FString& StatId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::PurchaseOrUpgradeHomebaseNode_Implementation(const FString& NodeId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::PromoteItem_Implementation(const FString& TargetItemId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::PopulatePrerolledOffers_Implementation(FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::OverrideMissionRewardLootTierGroup_Implementation(const FString& MatchmakingSessionId, const FString& OverrideRewardTag, FDedicatedServerUrlContext& Context) {
}

void UFortMcpProfileCampaign::OverrideMissionRewardLootLevel_Implementation(const FString& MatchmakingSessionId, int32 OverrideLootLevel, FDedicatedServerUrlContext& Context) {
}

void UFortMcpProfileCampaign::OpenCardPackBatch_Implementation(const TArray<FString>& CardPackItemIds, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::OpenCardPack_Implementation(const FString& CardPackItemId, int32 SelectionIdx, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::ModifyMission_Implementation(const FString& MatchmakingSessionId, const FString& Difficulty, FDedicatedServerUrlContext& Context) {
}

TArray<UFortCampaignHeroLoadoutItem*> UFortMcpProfileCampaign::GetOrderedHeroLoadoutItems() {
    return TArray<UFortCampaignHeroLoadoutItem*>();
}

void UFortMcpProfileCampaign::GetCurrentHeroLoadoutItem(UFortCampaignHeroLoadoutItem*& OutCampaignHeroLoadoutItem) const {
}

void UFortMcpProfileCampaign::FailsafeSaveMissionResults_Implementation(const FEndZoneScoreAndAwards& PlayerScoreData, const FString& MatchmakingSessionId, const FString& MissionName, const FString& MissionStatus, int32 DifficultyIncreaseTier, FDedicatedServerUrlContext& Context) {
}

void UFortMcpProfileCampaign::EquipCampaignCustomization_Implementation(ECampaignCustomizationCategory SlotName, const FString& ItemToSlot, int32 IndexWithinSlot, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::EndPrimaryMission_Implementation(const TArray<FFortQuestObjectiveCompletion>& Advance, const FString& MatchmakingSessionId, const FString& MissionName, const FString& MissionStatus, const TArray<FFortQuestEarnedBadgeData>& EarnedBadgeData, const TArray<FString>& EarnedItemCaches, int32 DifficultyIncreaseTier, int32 NumMissionPoints, bool bCriticalMatchBonus, const TArray<FString>& ShuffledLoadoutUsed, int32 ShuffledLockerUsedIndex, FDedicatedServerUrlContext& Context) {
}

void UFortMcpProfileCampaign::EndMatch_Implementation(const TArray<FAccountIdAndMatchEndData>& PlayersAndMatchEndData, const FString& MatchmakingSessionId, const FString& MissionName, const FString& MissionStatus, int32 DifficultyIncreaseTier, FDedicatedServerUrlContext& Context) {
}

void UFortMcpProfileCampaign::EarnScore_Implementation(const TArray<FAccountIdAndScore>& PlayersAndScores, const FString& MatchmakingSessionId, FDedicatedServerUrlContext& Context) {
}

void UFortMcpProfileCampaign::ConvertLegacyAlterations_Implementation(const FString& TargetItemId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::ConvertItem_Implementation(const FString& TargetItemId, int32 ConversionIndex, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::ConsumeItems_Implementation(const TArray<FString>& ItemsToConsumeIds, const TArray<int32>& ItemCountsToConsume, const FString& ConsumeReason, FDedicatedServerUrlContext& Context) {
}

void UFortMcpProfileCampaign::CollectExpedition_Implementation(const FString& ExpeditionTemplate, const FString& ExpeditionId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::ClearHeroLoadout_Implementation(const FString& LoadoutId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::ClaimMissionAlertRewards_Implementation(FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::ClaimLoginReward_Implementation(FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::ClaimDifficultyIncreaseRewards_Implementation(FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::ClaimCollectionBookRewards_Implementation(int32 RequiredXp, int32 SelectedRewardIndex, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::ClaimCollectedResources_Implementation(const TArray<FString>& CollectorsToClaim, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::AssignWorkerToSquadBatch_Implementation(const TArray<FString>& CharacterIds, const TArray<FString>& SquadIds, const TArray<int32>& SlotIndices, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::AssignWorkerToSquad_Implementation(const FString& CharacterId, const FString& SquadId, int32 SlotIndex, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::AssignTeamPerkToLoadout_Implementation(const FString& TeamPerkId, const FString& LoadoutId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::AssignHeroToLoadout_Implementation(const FString& HeroId, const FString& LoadoutId, const FString& SlotName, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::AssignGadgetToLoadout_Implementation(const FString& GadgetId, const FString& LoadoutId, int32 SlotIndex, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::ApplyAlteration_Implementation(const FString& TargetItemId, const FString& AlterationItemId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::ActivateConsumable_Implementation(const FString& TargetItemId, const FString& TargetAccountId, FClientUrlContext& Context) {
}

void UFortMcpProfileCampaign::AbandonExpedition_Implementation(const FString& ExpeditionId, FClientUrlContext& Context) {
}
*/
UFortMcpProfileCampaign::UFortMcpProfileCampaign() {
    bEnableHeroLoadoutMocking = true;
    HeroLoadoutCommandDelaySeconds = 1;
}

