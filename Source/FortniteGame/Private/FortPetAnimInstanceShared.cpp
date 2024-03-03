#include "FortPetAnimInstanceShared.h"

UFortPetAnimInstanceShared::UFortPetAnimInstanceShared() {
    this->DeltaTime = 1;
    this->bAreActiveFlagChangesPending = false;
    this->OwnerFortPawn = NULL;
    this->OwnerPet = NULL;
    this->bIsOnGround = false;
    this->bIsFrontEndPreview = false;
    this->bLobbySkyDive_IsDiving = false;
}

