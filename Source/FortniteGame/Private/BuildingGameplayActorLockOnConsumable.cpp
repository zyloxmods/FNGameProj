#include "BuildingGameplayActorLockOnConsumable.h"
#include "Net/UnrealNetwork.h"

void ABuildingGameplayActorLockOnConsumable::OnRep_InteractingPawn() {
}


void ABuildingGameplayActorLockOnConsumable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingGameplayActorLockOnConsumable, InteractingPawn);
}

ABuildingGameplayActorLockOnConsumable::ABuildingGameplayActorLockOnConsumable() {
    this->SecondsBeforeDeathAfterPickup = 1;
    this->InteractRadius = 1;
    this->PawnInterpSpeed = 1;
    this->PawnDisableRotationSeconds = 1;
    this->InteractingPawn = NULL;
}

