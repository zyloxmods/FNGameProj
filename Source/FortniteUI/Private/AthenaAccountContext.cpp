#include "AthenaAccountContext.h"

void UAthenaAccountContext::SimulateBattleBookPurchase(int32 NumLevelsToPurchase, int32& BonusLevelsGranted, bool& bOverLimit) {
}

bool UAthenaAccountContext::ShouldReplaceBattleStarsWithAlternateReward() const {
    return false;
}

bool UAthenaAccountContext::IsAtMaxBattlePassTier() const {
    return false;
}

int32 UAthenaAccountContext::GetCurrentSeasonNumber() const {
    return 0;
}

FText UAthenaAccountContext::GetCurrentSeasonName() const {
    return FText::GetEmpty();
}

UAthenaSeasonItemDefinition* UAthenaAccountContext::GetCurrentSeasonDefinition() {
    return NULL;
}

void UAthenaAccountContext::GetBattleBookPurchaseLimit(int32& MaxNumLevelsPossibleToPurchase, int32& BonusLevelsGranted) {
}

UAthenaAccountContext::UAthenaAccountContext() {
}

