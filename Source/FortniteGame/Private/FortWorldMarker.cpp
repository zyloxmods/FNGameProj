#include "FortWorldMarker.h"

void UFortWorldMarker::PlayerStateDestroyed(AActor* DestroyedActor) {
}

void UFortWorldMarker::PickedUp(AFortPickup* SelfActor, AFortPawn* InteractingPawn, const UFortWorldItemDefinition* WorldItemDefinition, FVector PickupLocation) {
}

void UFortWorldMarker::ActorDestroyed(AActor* DestroyedActor) {
}

UFortWorldMarker::UFortWorldMarker() {
    MarkerComponent = NULL;
    MarkerActor = NULL;
    MarkerWidget = NULL;
}

