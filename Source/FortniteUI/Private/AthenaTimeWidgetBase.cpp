#include "AthenaTimeWidgetBase.h"

void UAthenaTimeWidgetBase::UpdateTimeText() {
}

void UAthenaTimeWidgetBase::StopTimeDisplay() {
}

void UAthenaTimeWidgetBase::StartTimeDisplay() {
}



void UAthenaTimeWidgetBase::OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep) {
}

void UAthenaTimeWidgetBase::HandleGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

UAthenaTimeWidgetBase::UAthenaTimeWidgetBase() {
    this->bIsDisplaying = false;
    this->CachedFinalCountdownTime = 0.00f;
    this->TimeText = NULL;
}

