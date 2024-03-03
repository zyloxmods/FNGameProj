#include "BuildingGameplayActorCloneMachine.h"
#include "Net/UnrealNetwork.h"

void ABuildingGameplayActorCloneMachine::OnRep_RespawnServerEndTime() {
}

void ABuildingGameplayActorCloneMachine::OnRep_ActivationServerEndTime() {
}

void ABuildingGameplayActorCloneMachine::OnCloneMachineSpawnsPlayer_Implementation(AFortPlayerPawn* PlayerPawn) {
}

void ABuildingGameplayActorCloneMachine::OnCloneMachineRespawningBegins_Implementation() {
}

void ABuildingGameplayActorCloneMachine::OnCloneMachineActivationBegins_Implementation() {
}

void ABuildingGameplayActorCloneMachine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingGameplayActorCloneMachine, ActivationServerEndTime);
    DOREPLIFETIME(ABuildingGameplayActorCloneMachine, RespawnServerEndTime);
}

ABuildingGameplayActorCloneMachine::ABuildingGameplayActorCloneMachine() {
    this->CloneLocation = NULL;
    this->bRespawnCompleteAndSelfDestructing = false;
    this->OnDamagedNotifyPlayerSound = NULL;
    this->OnDestroyedNotifyPlayerSound = NULL;
    this->ActivationServerEndTime = 1;
    this->RespawnServerEndTime = 1;
}

