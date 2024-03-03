#include "AthenaPlayerMatchReport.h"

void UAthenaPlayerMatchReport::GetXpRewards(TArray<FAthenaMatchXpReward>& XpRewards) {
}

int32 UAthenaPlayerMatchReport::GetTotalSeasonalXpEarned() const {
    return 0;
}

int32 UAthenaPlayerMatchReport::GetTotalScoreEarned() const {
    return 0;
}

int32 UAthenaPlayerMatchReport::GetTotalBookXpEarned() const {
    return 0;
}

void UAthenaPlayerMatchReport::GetLootRewards(TArray<FAthenaMatchLootReward>& LootRewards) {
}

UAthenaPlayerMatchReport::UAthenaPlayerMatchReport() {
    this->bHasMatchStats = false;
    this->bHasTeamStats = false;
    this->bHasRewards = false;
}

