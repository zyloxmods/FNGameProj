#include "AthenaMapPanel.h"




void UAthenaMapPanel::HandleInspectChallengeInputAction() {
}

void UAthenaMapPanel::HandleCyclePageInputAction() {
}

void UAthenaMapPanel::ChangeViewMode(bool bChallengesFocusedMode) {
}

bool UAthenaMapPanel::CanShowChallengePins() const {
    return false;
}



UAthenaMapPanel::UAthenaMapPanel() {
    this->GamePanel = NULL;
    this->MapLayerContainer = NULL;
    this->SizeBoxChallenge = NULL;
    this->Athena_MapInfo = NULL;
    this->Button_MobileCycle = NULL;
}

