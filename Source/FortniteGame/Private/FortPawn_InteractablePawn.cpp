#include "FortPawn_InteractablePawn.h"

void AFortPawn_InteractablePawn::BlueprintOnInteract_Implementation(const AFortPawn* InteractingPawn) {
}

void AFortPawn_InteractablePawn::BlueprintOnBeginInteract_Implementation() {
}

FText AFortPawn_InteractablePawn::BlueprintGetInteractionString_Implementation(const AFortPawn* InteractingPawn) const {
    return FText::GetEmpty();
}

bool AFortPawn_InteractablePawn::BlueprintCanInteract_Implementation(const AFortPawn* InteractingPawn) const {
    return false;
}

AFortPawn_InteractablePawn::AFortPawn_InteractablePawn() {
}

