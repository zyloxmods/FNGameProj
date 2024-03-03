#include "AthenaAccountContext.h"

void UAthenaAccountContext::SimulateBattleBookPurchase(int32 NumLevelsToPurchase, int32& BonusLevelsGranted, bool& bOverLimit) {
}

bool UAthenaAccountContext::ShouldReplaceBattleStarsWithAlternateReward() const {
    return false;
}

bool UAthenaAccountContext::IsAtMaxBattlePassTier() const {
    return false;
}

FText UAthenaAccountContext::GetCurrentSeasonNumberAsText(bool bFullText) const {
    return FText::GetEmpty();
}

int32 UAthenaAccountContext::GetCurrentSeasonNumber() const {
    return 0;
}

UAthenaSeasonItemDefinition* UAthenaAccountContext::GetCurrentSeasonDefinition() {
    return NULL;
}

FText UAthenaAccountContext::GetCurrentChapterNumberAsText(bool bFullText) const {
    return FText::GetEmpty();
}

FText UAthenaAccountContext::GetCurrentChapterAndSeasonText() const {
    return FText::GetEmpty();
}

void UAthenaAccountContext::GetBattleBookPurchaseLimit(int32& MaxNumLevelsPossibleToPurchase, int32& BonusLevelsGranted) {
}

UAthenaAccountContext::UAthenaAccountContext() {
}

