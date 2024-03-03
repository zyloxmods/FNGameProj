#include "MashScoreEventWidgetBase.h"

void UMashScoreEventWidgetBase::UpdateStreakScoreMultiplierCountdown() {
}



void UMashScoreEventWidgetBase::OnStreakScoreMultiplierExpires() {
}



void UMashScoreEventWidgetBase::OnPlayerDataChanged() {
}

UMashScoreEventWidgetBase::UMashScoreEventWidgetBase() {
    this->MashMutatorRef = NULL;
    this->CachedLocalPlayerState = NULL;
    this->StreakScoreMultiplierRemainingTime = 1;
}

