#include "FortAthenaMutator_Heist.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Heist::SendPlayerAcquiredMessage(AFortPlayerStateAthena* CarryingPlayerState) {
}

void AFortAthenaMutator_Heist::OnSpecialActorRemoved(const FSpecialActorRepData& SpecialActorData) {
}

void AFortAthenaMutator_Heist::OnSpecialActorAdded(const FSpecialActorRepData& SpecialActorData) {
}

void AFortAthenaMutator_Heist::OnMutatorGenericIntegerUpdated(int32 GenericIntegerIndex, int32 NewIntegerValue) {
}

void AFortAthenaMutator_Heist::OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3) {
}

void AFortAthenaMutator_Heist::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortAthenaMutator_Heist::OnExitCraftSpawned(AFortAthenaExitCraft* ExitCraft, AFortAthenaExitCraftSpawner* ExitCraftSpawner) {
}

void AFortAthenaMutator_Heist::OnExitCraftIsDestroying(AFortAthenaExitCraft* ExitCraft) {
}

void AFortAthenaMutator_Heist::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Heist, NumUnspawnedExitCrafts);
    DOREPLIFETIME(AFortAthenaMutator_Heist, NumSpawnedExitCrafts);
    DOREPLIFETIME(AFortAthenaMutator_Heist, NumDepartedExitCrafts);
}

AFortAthenaMutator_Heist::AFortAthenaMutator_Heist() {
    this->ExitCraftInfo = NULL;
    this->HeistVictorySoundCue = NULL;
    this->bCurrExitCraftDeparted = false;
    this->SpawnExitCraftTime = 1;
    this->CurrExitCraftIndexToSpawn = 0;
    this->SupplyDropStartingAngle = 1;
    this->ExitCraftStartingAngle = 1;
    this->CurrBlingSupplyDropIndexHandled = 0;
    this->NumUnspawnedExitCrafts = 0;
    this->NumSpawnedExitCrafts = 0;
    this->NumDepartedExitCrafts = 0;
    this->JewelsLostToStorm = 0;
    this->SafesLostToStorm = 0;
    this->LastAcquiredEnemyMsgTime = 1;
    this->MinTimeAllowedBetweenAcquiredEnemyMessages = 1;
    this->IconToShowInSquadBar = NULL;
}

