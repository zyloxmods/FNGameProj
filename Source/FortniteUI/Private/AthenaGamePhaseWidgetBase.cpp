#include "AthenaGamePhaseWidgetBase.h"

void UAthenaGamePhaseWidgetBase::OnGameStateSet(AFortGameState* InGameState) {
}


void UAthenaGamePhaseWidgetBase::HandleGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void UAthenaGamePhaseWidgetBase::HandleCountdownUpdate(int32 TimeRemaining) {
}

UAthenaGamePhaseWidgetBase::UAthenaGamePhaseWidgetBase() {
    this->StormComingFontMaterial = NULL;
    this->StormComingWarningTime = 1;
    this->TimeText = NULL;
}

