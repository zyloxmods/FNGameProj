#include "FortPetAnimInstanceShared.h"

UFortPetAnimInstanceShared::UFortPetAnimInstanceShared() {
    this->DeltaTime = 0.00f;
    this->OwnerFortPawn = NULL;
    this->OwnerPet = NULL;
    this->bIsFrontEndPreview = false;
    this->bAreActiveFlagChangesPending = false;
}

