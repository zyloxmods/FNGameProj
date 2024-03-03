#include "AthenaMatchXPScreenWidget.h"

void UAthenaMatchXPScreenWidget::UpdateElementsVisibility() {
}

void UAthenaMatchXPScreenWidget::SpectatorStreamingChanged(bool bSpectatorStreaming) {
}



void UAthenaMatchXPScreenWidget::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void UAthenaMatchXPScreenWidget::HandleResurrectingNow(bool bResurrectingNow) {
}

UAthenaMatchXPScreenWidget::UAthenaMatchXPScreenWidget() {
    this->bAutoTransitionScreen = true;
    this->NumWidgetsFinished = 0;
    this->Button_StayTogether = NULL;
    this->Button_Back = NULL;
    this->Button_NextMatch = NULL;
    this->Button_PrevTeam = NULL;
    this->Button_NextTeam = NULL;
    this->Button_Replay = NULL;
    this->Button_Cancel = NULL;
    this->Button_StatToggle = NULL;
    this->CommonWidgetSwitcher_DetailSwitch = NULL;
    this->CommonWidgetSwitcher_StatIcon = NULL;
    this->Section_DetailsRecap = NULL;
    this->Section_XPRecap = NULL;
}

