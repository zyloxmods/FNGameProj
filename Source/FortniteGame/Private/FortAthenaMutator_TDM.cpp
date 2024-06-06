#include "FortAthenaMutator_TDM.h"

void AFortAthenaMutator_TDM::OnMutatorGenericIntegerUpdated(int32 GenericIntegerIndex, int32 NewIntegerValue) {
}

void AFortAthenaMutator_TDM::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

AFortAthenaMutator_TDM::AFortAthenaMutator_TDM() {
    bIsTwoTeamTDM = false;
    bShouldGrantInventoryToNewPlayers = true;
}

