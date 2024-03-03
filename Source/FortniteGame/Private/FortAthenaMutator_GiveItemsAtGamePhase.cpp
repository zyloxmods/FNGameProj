#include "FortAthenaMutator_GiveItemsAtGamePhase.h"

void AFortAthenaMutator_GiveItemsAtGamePhase::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

AFortAthenaMutator_GiveItemsAtGamePhase::AFortAthenaMutator_GiveItemsAtGamePhase() {
    this->PhaseToGiveItems = EAthenaGamePhase::None;
}

