#include "AthenaRespawnBase.h"

void UAthenaRespawnBase::UpdateAllUI() {
}



void UAthenaRespawnBase::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

UAthenaRespawnBase::UAthenaRespawnBase() {
    this->RespawnState = ERespawnUIState::Hidden;
}

