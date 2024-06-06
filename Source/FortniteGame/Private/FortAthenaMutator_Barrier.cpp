#include "FortAthenaMutator_Barrier.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Barrier::OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3) {
}

void AFortAthenaMutator_Barrier::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortAthenaMutator_Barrier::CheckHealthThreshold(uint8 TeamNum) {
}

void AFortAthenaMutator_Barrier::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Barrier, bGameEndsWhenObjectiveIsDestroyed);
    DOREPLIFETIME(AFortAthenaMutator_Barrier, BigBaseWall);
    DOREPLIFETIME(AFortAthenaMutator_Barrier, Team_0_State);
    DOREPLIFETIME(AFortAthenaMutator_Barrier, Team_1_State);
}

AFortAthenaMutator_Barrier::AFortAthenaMutator_Barrier() {
    BigBaseWallClass = NULL;
    ObjectiveFlag = NULL;
    bGameEndsWhenObjectiveIsDestroyed = false;
    BigBaseWall = NULL;
}

