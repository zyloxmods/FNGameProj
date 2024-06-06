#include "FortAthenaMutator_Ashton.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Ashton::SelectNextVillainLeader() {
}

void AFortAthenaMutator_Ashton::OnRep_VillainLeaderLocationForSound() {
}

void AFortAthenaMutator_Ashton::OnRep_VillainLeaderLocationForSnapSound() {
}

void AFortAthenaMutator_Ashton::OnRep_VillainLeaderLocationForDeathSound() {
}

void AFortAthenaMutator_Ashton::OnRep_StoneList() {
}

void AFortAthenaMutator_Ashton::OnRep_NumVillainRespawnsRemaining() {
}




void AFortAthenaMutator_Ashton::OnPickupSpawnedAndReady(AFortGameModePickup* PickupObj, const UFortItemDefinition* PickupItemDef) {
}

void AFortAthenaMutator_Ashton::OnPickupDestroying(AFortGameModePickup* PickupObj, const UFortItemDefinition* PickupItemDef) {
}

void AFortAthenaMutator_Ashton::OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3) {
}

void AFortAthenaMutator_Ashton::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

EAshtonStoneStateType AFortAthenaMutator_Ashton::GetStoneState(EAshtonStoneType StoneType) {
    return EAshtonStoneStateType::NotSpawned;
}

int32 AFortAthenaMutator_Ashton::GetNumCapturedStones(const TArray<FAshtonStoneState>& TestList) {
    return 0;
}

void AFortAthenaMutator_Ashton::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Ashton, StoneList);
    DOREPLIFETIME(AFortAthenaMutator_Ashton, VillainLeaderLocationForSnapSound);
    DOREPLIFETIME(AFortAthenaMutator_Ashton, VillainLeaderLocationForDeathSound);
    DOREPLIFETIME(AFortAthenaMutator_Ashton, VillainLeaderLocationForSound);
    DOREPLIFETIME(AFortAthenaMutator_Ashton, NumVillainRespawnsRemaining);
    DOREPLIFETIME(AFortAthenaMutator_Ashton, CachedNumCapturedStones);
}

AFortAthenaMutator_Ashton::AFortAthenaMutator_Ashton() {
    AutoEquipController = NULL;
    VillainLeaderItemDef = NULL;
    VillainLeaderPC = NULL;
    NumVillainRespawnsRemaining = 0;
    CachedNumCapturedStones = 0;
}

