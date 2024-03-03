#include "FortPCBInfoPanel.h"

void UFortPCBInfoPanel::UpdateCMSData(bool bHasBenefitsActive) {
}

bool UFortPCBInfoPanel::ShouldDisplayPCBData() const {
    return false;
}

FText UFortPCBInfoPanel::GetPCBHeader() const {
    return FText::GetEmpty();
}

FText UFortPCBInfoPanel::GetPCBDescription() const {
    return FText::GetEmpty();
}


UFortPCBInfoPanel::UFortPCBInfoPanel() : UUserWidget(FObjectInitializer::Get()) {
    this->bDisplayPCBData = false;
}

