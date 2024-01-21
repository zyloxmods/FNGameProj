#include "FortMcpProfileAthena.h"
/*
void UFortMcpProfileAthena::SetPartyAssistQuest(const FString& QuestToPinAsPartyAssist, FClientUrlContext& Context) {
}

void UFortMcpProfileAthena::SetCompetitiveRegion(const FString& NewlySelectedRegionId, FClientUrlContext& Context) {
}

void UFortMcpProfileAthena::SetBattleRoyaleBanner(const FString& HomebaseBannerIconId, const FString& HomebaseBannerColorId, FClientUrlContext& Context) {
}

void UFortMcpProfileAthena::ReportConsumableUsed(int32 UsedQuantity, const FString& ItemType, FDedicatedServerUrlContext& Context) {
}

bool UFortMcpProfileAthena::HasPurchasedSeasonBook() const {
    return false;
}

void UFortMcpProfileAthena::HandleActiveEventFlagsChanged(const TArray<FString>& ActiveEventFlags) {
}

int32 UFortMcpProfileAthena::GetSeasonMatchXpBoost() const {
    return 0;
}

bool UFortMcpProfileAthena::GetSeasonLevelUpReward(int32 SeasonLevel, FFortItemInstanceQuantityPair& Reward, int32& RewardLevel) {
    return false;
}

FAthenaSeasonRewardLevelInfo UFortMcpProfileAthena::GetSeasonLevelInfo(int32 SeasonLevel) {
    return FAthenaSeasonRewardLevelInfo{};
}

int32 UFortMcpProfileAthena::GetSeasonFriendMatchXpBoost() const {
    return 0;
}

int32 UFortMcpProfileAthena::GetSeasonBookLevel() const {
    return 0;
}

UAthenaSeasonItemDefinition* UFortMcpProfileAthena::GetActiveSeasonDefinition() const {
    return NULL;
}

void UFortMcpProfileAthena::EquipBattleRoyaleCustomization(EAthenaCustomizationCategory SlotName, const FString& ItemToSlot, int32 IndexWithinSlot, const TArray<FMcpVariantReader>& VariantUpdates, FClientUrlContext& Context) {
}

void UFortMcpProfileAthena::EndBattleRoyaleGame(const TArray<FFortQuestObjectiveCompletion>& Advance, const FString& PlaylistId, const FAthenaMatchStats& MatchStats, int32 FriendshipXpBoost, int32 CosmeticXpBoost, float AntiAddictionPlayTimeMultiplier, bool ShouldAccumulateToProfileStats, bool ShouldSaveToRecentGameLists, const TArray<FString>& Medals, FDedicatedServerUrlContext& Context) {
}

bool UFortMcpProfileAthena::CanPurchaseSeasonBook() const {
    return false;
}

void UFortMcpProfileAthena::BulkEquipBattleRoyaleCustomization(const TArray<FFortAthenaLoadoutData>& LoadoutData, FClientUrlContext& Context) {
}
*/
UFortMcpProfileAthena::UFortMcpProfileAthena() {
    this->PartyAssistedQuest = NULL;
}

