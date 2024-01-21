#include "FortOptionsTab.h"


void UFortOptionsTab::UpdateOptions(bool UpdateQuality) {
}

bool UFortOptionsTab::ShouldShowSetting_Implementation(FSettingData SettingData) {
    return false;
}

void UFortOptionsTab::ResetOptionsToDefault() {
}

bool UFortOptionsTab::IsXboxPlatform() {
    return false;
}

bool UFortOptionsTab::IsSwitchPlatform() {
    return false;
}

bool UFortOptionsTab::IsPS4Platform() {
    return false;
}

bool UFortOptionsTab::IsAthena() {
    return false;
}

void UFortOptionsTab::ConstructSettingList() {
}


UFortOptionsTab::UFortOptionsTab() {
    this->TabListView = NULL;
    this->TabType = ESettingTab::None;
}

