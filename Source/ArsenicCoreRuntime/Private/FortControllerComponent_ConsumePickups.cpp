#include "FortControllerComponent_ConsumePickups.h"
#include "Net/UnrealNetwork.h"

void UFortControllerComponent_ConsumePickups::SetPickupBeingConsumed(AActor* InPickupActorBeingConsumed) {
}

void UFortControllerComponent_ConsumePickups::ServerSetPickupBeingConsumed_Implementation(AActor* InPickupActorBeingConsumed) {
}

void UFortControllerComponent_ConsumePickups::OnRep_ConsumePickups() {
}

void UFortControllerComponent_ConsumePickups::OnPlayerInteractLongUseChanged(bool bPlayerHasStartedALongUseInteraction, bool bLongUseInteractionCompleted) {
}


AActor* UFortControllerComponent_ConsumePickups::GetPickupThatWasLastConsumed() {
    return NULL;
}

AActor* UFortControllerComponent_ConsumePickups::GetPickupBeingConsumed() {
    return NULL;
}

void UFortControllerComponent_ConsumePickups::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortControllerComponent_ConsumePickups, bConsumePickups);
    DOREPLIFETIME(UFortControllerComponent_ConsumePickups, ConsumePickupsMutator);
}

UFortControllerComponent_ConsumePickups::UFortControllerComponent_ConsumePickups() {
    this->bConsumePickups = false;
    this->ClassOfCosmeticActorToSpawnOnPickupBeingConsumed = NULL;
    this->ActorSpawnedOnPickupThatIsBeingConsumed = NULL;
    this->PickupActorBeingConsumed = NULL;
    this->PickupActorThatWasLastConsumed = NULL;
}

