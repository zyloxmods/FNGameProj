#include "FortOptionsTab.h"


void UFortOptionsTab::TempNew_UpdateOptionsTab() {
}

void UFortOptionsTab::ResetOptionsToDefault() {
}

bool UFortOptionsTab::IsControllerDefaultInputType() const {
    return false;
}

bool UFortOptionsTab::IsAthena() {
    return false;
}

void UFortOptionsTab::DeactivateTab() {
}


bool UFortOptionsTab::AreParentalControlsEnabled() {
    return false;
}

void UFortOptionsTab::ActivateTab() {
}

UFortOptionsTab::UFortOptionsTab() {
    this->TabType = ESettingTab::None;
}

