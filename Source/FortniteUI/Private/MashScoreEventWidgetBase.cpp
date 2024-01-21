#include "MashScoreEventWidgetBase.h"

void UMashScoreEventWidgetBase::UpdateDynamicScoreMultiplierCountdown() {
}



void UMashScoreEventWidgetBase::OnPlayerScoreChanged() {
}


void UMashScoreEventWidgetBase::OnDynamicScoreMultiplierTotalKillCountChanged() {
}


void UMashScoreEventWidgetBase::OnDynamicScoreMultiplierExpires() {
}


void UMashScoreEventWidgetBase::OnDynamicScoreMultiplierChanged() {
}


void UMashScoreEventWidgetBase::OnConstantScoreMultiplierChanged() {
}

UMashScoreEventWidgetBase::UMashScoreEventWidgetBase() {
    this->MashMutatorRef = NULL;
    this->CachedScoreMultiplier = 1.00f;
    this->DynamicScoreMultiplierTimeWithoutKillReset = 0.00f;
    this->DynamicScoreMultiplierRemainingTime = 0.00f;
}

