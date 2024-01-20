#include "FortAthenaMutator_GiveItemsAtGamePhaseStep.h"

void AFortAthenaMutator_GiveItemsAtGamePhaseStep::OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep) {
}

AFortAthenaMutator_GiveItemsAtGamePhaseStep::AFortAthenaMutator_GiveItemsAtGamePhaseStep() {
    this->PhaseToGiveItems = EAthenaGamePhaseStep::BusFlying;
}

