#include "HomeBaseContext.h"

bool UHomeBaseContext::TryGetHomebaseSquadData(const FName SquadId, FHomebaseSquad& OutHomebaseSquad) const {
    return false;
}

void UHomeBaseContext::SetActiveHeroLoadout(UFortCampaignHeroLoadoutItem* HeroLoadout) {
}

bool UHomeBaseContext::HasHeroUnlockedCommanderPerk(UFortHero* Hero) const {
    return false;
}

int32 UHomeBaseContext::GetTotalSkillPointsEarned() const {
    return 0;
}

bool UHomeBaseContext::GetTotalHomebaseRating(const FUniqueNetIdRepl& UniqueId, int32& Rating, float& ProgressFraction, bool bUsePhoenixStats) const {
    return false;
}

bool UHomeBaseContext::GetTeamHomebaseRating(const FUniqueNetIdRepl& PlayerId, int32& Rating, float& ProgressFraction, bool bUsePhoenixStats) const {
    return false;
}

void UHomeBaseContext::GetStaticSetBonusData(const FGameplayTag& InSetBonusTag, FWorkerSetBonusData& OutSetBonusData, FFortMultiSizeBrush& OutBrush) {
}

void UHomeBaseContext::GetResourceCollectorRewardsEstimates(const TArray<UFortCollectedResourceItem*>& CollectorTypes, TArray<FFortItemQuantityPair>& OutEstimates) {
}

void UHomeBaseContext::GetResourceCollectorRewardsEstimate(UFortCollectedResourceItem* CollectorType, FFortItemQuantityPair& OutEstimate) {
}

void UHomeBaseContext::GetResourceCollectorRateInfo(UFortCollectedResourceItem* CollectorType, float& RatePerSecond, int32& MaxCapacity) {
}

int32 UHomeBaseContext::GetNumAccountLimitedItems() {
    return 0;
}

FName UHomeBaseContext::GetMissionDefenderSquadId() const {
    return NAME_None;
}

int32 UHomeBaseContext::GetMaxDeployableDefenderCount() const {
    return 0;
}

bool UHomeBaseContext::GetLocalTeamHomebaseRating(int32& Rating, float& ProgressFraction, bool bUsePhoenixStats) const {
    return false;
}

bool UHomeBaseContext::GetLocalPlayerHomebaseRating(int32& Rating, float& ProgressFraction, bool bUsePhoenixStats) const {
    return false;
}

FName UHomeBaseContext::GetHomebaseDefenderSquadId() const {
    return NAME_None;
}

int32 UHomeBaseContext::GetCurrentDeployedDefenderCount() const {
    return 0;
}

void UHomeBaseContext::GetAllResourceCollectorRewardEstimates(TArray<FFortItemQuantityPair>& OutEstimates) {
}

UFortCampaignHeroLoadoutItem* UHomeBaseContext::GetActiveHeroLoadout() const {
    return NULL;
}

FName UHomeBaseContext::GetActiveDefenderSquadId() const {
    return NAME_None;
}

bool UHomeBaseContext::DoesTeamMeetRequiredHomebaseRating(int32 RequiredHomebaseRating, bool bUsePhoenixStats) const {
    return false;
}

bool UHomeBaseContext::DoesTeamMeetMaximumHomebaseRatingRequirement(int32 MaximumAllowedHomebaseRating, bool bUsePhoenixStats) const {
    return false;
}

void UHomeBaseContext::ClearHeroLoadout(UFortCampaignHeroLoadoutItem* HeroLoadout) {
}

void UHomeBaseContext::BroadcastSquadSlotMarkedAsSeen() {
}

UHomeBaseContext::UHomeBaseContext() {
}

