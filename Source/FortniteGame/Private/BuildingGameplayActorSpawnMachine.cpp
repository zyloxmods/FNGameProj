#include "BuildingGameplayActorSpawnMachine.h"
#include "Net/UnrealNetwork.h"

void ABuildingGameplayActorSpawnMachine::SetSpawnMachineState(ESpawnMachineState NewState) {
}

bool ABuildingGameplayActorSpawnMachine::RebootPlayersInAir() const {
    return false;
}

void ABuildingGameplayActorSpawnMachine::OnSpawnMachineStateChanged_Implementation() {
}

void ABuildingGameplayActorSpawnMachine::OnResurrectionStarted_Implementation() {
}

void ABuildingGameplayActorSpawnMachine::OnResurrectionCompleted_Implementation() {
}

void ABuildingGameplayActorSpawnMachine::OnRep_SpawnMachineState() {
}

void ABuildingGameplayActorSpawnMachine::OnPlayerPawnResurrected_Implementation(AFortPlayerPawn* PlayerPawn) {
}

void ABuildingGameplayActorSpawnMachine::OnInterruptLongUse_Implementation(AFortPlayerControllerAthena* AthenaPC) {
}

void ABuildingGameplayActorSpawnMachine::OnBeginLongUse_Implementation(AFortPlayerControllerAthena* AthenaPC) {
}

ESpawnMachineState ABuildingGameplayActorSpawnMachine::GetSpawnMachineState() const {
    return ESpawnMachineState::Default;
}

float ABuildingGameplayActorSpawnMachine::GetCooldownLength() const {
    return 0.0f;
}

void ABuildingGameplayActorSpawnMachine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingGameplayActorSpawnMachine, SpawnMachineState);
}

ABuildingGameplayActorSpawnMachine::ABuildingGameplayActorSpawnMachine() {
    ResurrectLocation = NULL;
    SquadId = 0;
    ActiveTeam = 0;
    SpawnMachineState = ESpawnMachineState::Default;
    InteractSoundCueLoop = NULL;
    SpawnMachineSubTextState = ESpawnMachineSubTextState::NoCards;
    HandleIntoGameState = 0;
}

