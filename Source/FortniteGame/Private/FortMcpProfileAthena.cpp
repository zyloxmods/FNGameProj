#include "FortMcpProfileAthena.h"
/*
void UFortMcpProfileAthena::UnlockRewardNode_Implementation(const FString& NodeId, const FString& rewardGraphId, const FString& rewardCfg, FClientUrlContext& Context) {
}

void UFortMcpProfileAthena::ToggleQuestActiveState_Implementation(const TArray<FString>& QuestIds, FClientUrlContext& Context) {
}

void UFortMcpProfileAthena::SetRewardGraphConfig_Implementation(const TArray<FString>& State, const FString& rewardGraphId, FClientUrlContext& Context) {
}

void UFortMcpProfileAthena::SetHardcoreModifier_Implementation(const TArray<FHardcoreModifierUpdate>& Updates, FClientUrlContext& Context) {
}

void UFortMcpProfileAthena::RequestRestedStateIncrease_Implementation(int32 timeToCompensateFor, int32 restedXpGenAccumulated, FClientUrlContext& Context) {
}

void UFortMcpProfileAthena::ReportConsumableUsed_Implementation(int32 UsedQuantity, const FString& ItemType, FDedicatedServerUrlContext& Context) {
}
*/
bool UFortMcpProfileAthena::HasPurchasedSeasonBook() const {
    return false;
}

void UFortMcpProfileAthena::HandleActiveEventFlagsChanged(const TArray<FString>& ActiveEventFlags) {
}

float UFortMcpProfileAthena::GetSeasonRestedXpMult() const {
    return 0.0f;
}

float UFortMcpProfileAthena::GetSeasonRestedXpExchange() const {
    return 0.0f;
}

int32 UFortMcpProfileAthena::GetSeasonRestedXp() const {
    return 0;
}

int32 UFortMcpProfileAthena::GetSeasonOverflowXp() const {
    return 0;
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
/*
void UFortMcpProfileAthena::ExchangeGiftToken_Implementation(FClientUrlContext& Context) {
}

void UFortMcpProfileAthena::EndBattleRoyaleGame_Implementation(const TArray<FFortQuestObjectiveCompletion>& Advance, const FString& PlaylistId, const FAthenaMatchStats& MatchStats, int32 TotalXPAccum, int32 RestedXPAccum, int32 FriendshipXpBoost, int32 CosmeticXpBoost, float AntiAddictionPlayTimeMultiplier, bool ShouldAccumulateToProfileStats, bool ShouldSaveToRecentGameLists, const TArray<FAthenaAccolades>& Accolades, const TArray<FString>& ShuffledLoadoutUsed, int32 ShuffledLockerUsedIndex, const TArray<FString>& GrantedQuestDefs, const TArray<FSecondaryXpGained>& secondaryXp, FDedicatedServerUrlContext& Context) {
}

void UFortMcpProfileAthena::ChallengeBundleLevelUp_Implementation(const FString& BundleIdToLevel, FClientUrlContext& Context) {
}*/

bool UFortMcpProfileAthena::CanPurchaseSeasonBook() const {
    return false;
}

//void UFortMcpProfileAthena::ApplyVote_Implementation(const FString& OfferId, FClientUrlContext& Context) {
//}

