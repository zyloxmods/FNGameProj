#include "CobaltGamePhaseWidgetBase.h"


void UCobaltGamePhaseWidgetBase::OnGameStateSet(AFortGameState* InGameState) {
}


void UCobaltGamePhaseWidgetBase::HandleGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void UCobaltGamePhaseWidgetBase::HandleCountdownUpdate(int32 TimeRemaining) {
}

UCobaltGamePhaseWidgetBase::UCobaltGamePhaseWidgetBase() {
    this->StormComingWarningTime = 1;
}

