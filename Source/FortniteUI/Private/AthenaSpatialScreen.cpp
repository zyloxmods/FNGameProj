#include "AthenaSpatialScreen.h"

void UAthenaSpatialScreen::OnInputSuspensionChanged_Implementation() {
}

void UAthenaSpatialScreen::FireSpatialScreenAnalytic(const FString& Interaction) {
}

void UAthenaSpatialScreen::AddSpatialScreenSessionCounter(const FString& Entry, int32 Count) {
}

UAthenaSpatialScreen::UAthenaSpatialScreen() {
    this->bEnableSpatialInputPreprocessing = true;
    this->bEnableAnalytics = false;
    this->Button_Back = NULL;
    this->Button_CloseMobile = NULL;
    this->bNeedsBottomBar = false;
}

