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
    CloneLocation = NULL;
    bRespawnCompleteAndSelfDestructing = false;
    OnDamagedNotifyPlayerSound = NULL;
    OnDestroyedNotifyPlayerSound = NULL;
    ActivationServerEndTime = 1;
    RespawnServerEndTime = 1;
}

