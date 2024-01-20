#include "BuildingGameplayActorLockOnConsumable.h"
#include "Net/UnrealNetwork.h"

void ABuildingGameplayActorLockOnConsumable::OnRep_InteractingPawn() {
}


void ABuildingGameplayActorLockOnConsumable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingGameplayActorLockOnConsumable, InteractingPawn);
}

ABuildingGameplayActorLockOnConsumable::ABuildingGameplayActorLockOnConsumable() {
    this->SecondsBeforeDeathAfterPickup = 0.50f;
    this->InteractRadius = 70.00f;
    this->PawnInterpSpeed = 19.00f;
    this->PawnDisableRotationSeconds = 3.00f;
    this->InteractingPawn = NULL;
}

