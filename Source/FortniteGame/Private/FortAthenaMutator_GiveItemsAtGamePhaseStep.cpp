#include "FortAthenaMutator_GiveItemsAtGamePhaseStep.h"

void AFortAthenaMutator_GiveItemsAtGamePhaseStep::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

AFortAthenaMutator_GiveItemsAtGamePhaseStep::AFortAthenaMutator_GiveItemsAtGamePhaseStep() {
    PhaseToGiveItems = EAthenaGamePhaseStep::None;
}

