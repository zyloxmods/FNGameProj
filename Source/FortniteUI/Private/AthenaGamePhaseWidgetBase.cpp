#include "AthenaGamePhaseWidgetBase.h"

void UAthenaGamePhaseWidgetBase::OnGameStateSet(AFortGameState* InGameState) {
}


void UAthenaGamePhaseWidgetBase::HandleGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep) {
}

void UAthenaGamePhaseWidgetBase::HandleCountdownUpdate(int32 TimeRemaining) {
}

UAthenaGamePhaseWidgetBase::UAthenaGamePhaseWidgetBase() {
    this->StormComingFontMaterial = NULL;
    this->StormComingWarningTime = 0.00f;
    this->TimeText = NULL;
}

