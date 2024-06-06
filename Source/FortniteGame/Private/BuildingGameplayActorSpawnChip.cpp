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
    OwnerPlayerController = NULL;
    OwnerPlayerState = NULL;
    IndicatorClass = NULL;
    bAutoAcquireSpawnChip = false;
    SquadId = 0;
}

