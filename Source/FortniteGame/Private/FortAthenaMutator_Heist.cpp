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
    ExitCraftInfo = NULL;
    HeistVictorySoundCue = NULL;
    bCurrExitCraftDeparted = false;
    SpawnExitCraftTime = 1;
    CurrExitCraftIndexToSpawn = 0;
    SupplyDropStartingAngle = 1;
    ExitCraftStartingAngle = 1;
    CurrBlingSupplyDropIndexHandled = 0;
    NumUnspawnedExitCrafts = 0;
    NumSpawnedExitCrafts = 0;
    NumDepartedExitCrafts = 0;
    JewelsLostToStorm = 0;
    SafesLostToStorm = 0;
    LastAcquiredEnemyMsgTime = 1;
    MinTimeAllowedBetweenAcquiredEnemyMessages = 1;
    IconToShowInSquadBar = NULL;
}

