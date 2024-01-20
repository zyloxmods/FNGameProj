#include "FortAthenaMutator_Score.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Score::OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3) {
}

void AFortAthenaMutator_Score::OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortAthenaMutator_Score::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Score, bRespawnsAllowed);
}

AFortAthenaMutator_Score::AFortAthenaMutator_Score() {
    this->NumCoinWaves = 0;
    this->bSupportsRespawnConfig = false;
    this->bRespawnsAllowed = false;
}

