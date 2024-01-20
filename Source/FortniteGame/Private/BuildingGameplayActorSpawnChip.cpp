#include "BuildingGameplayActorSpawnChip.h"
#include "Net/UnrealNetwork.h"

void ABuildingGameplayActorSpawnChip::OnRep_RebootCardReplicatedState() {
}

void ABuildingGameplayActorSpawnChip::OnDestroyPickup_Implementation() {
}

void ABuildingGameplayActorSpawnChip::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingGameplayActorSpawnChip, RebootCardReplicatedState);
    DOREPLIFETIME(ABuildingGameplayActorSpawnChip, SquadId);
}

ABuildingGameplayActorSpawnChip::ABuildingGameplayActorSpawnChip() {
    this->OwnerPlayerController = NULL;
    this->OwnerPlayerState = NULL;
    this->IndicatorClass = NULL;
    this->bAutoAcquireSpawnChip = false;
    this->SquadId = 0;
}

