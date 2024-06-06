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
    bHasMatchStats = false;
    bHasTeamStats = false;
    bHasRewards = false;
}

