#include "BuildingGameplayActorLockOnConsumable.h"
#include "Net/UnrealNetwork.h"

void ABuildingGameplayActorLockOnConsumable::OnRep_InteractingPawn() {
}


void ABuildingGameplayActorLockOnConsumable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingGameplayActorLockOnConsumable, InteractingPawn);
}

ABuildingGameplayActorLockOnConsumable::ABuildingGameplayActorLockOnConsumable() {
    SecondsBeforeDeathAfterPickup = 1;
    InteractRadius = 1;
    PawnInterpSpeed = 1;
    PawnDisableRotationSeconds = 1;
    InteractingPawn = NULL;
}

