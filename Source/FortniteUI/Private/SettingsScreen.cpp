#include "SettingsScreen.h"


void USettingsScreen::SaveSettings() {
}

void USettingsScreen::ResetSettings() {
}


void USettingsScreen::NavigateToSettings(TArray<FName> SettingsCollectionNames) {
}


bool USettingsScreen::HaveSettingsBeenChanged() const {
    return false;
}

void USettingsScreen::CloseSettings() {
}

bool USettingsScreen::AttemptToPopNavigation() {
    return false;
}

USettingsScreen::USettingsScreen() {
    this->Settings_Panel = NULL;
    this->Registry = NULL;
}

