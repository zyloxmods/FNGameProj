#include "FortPetAnimInstanceShared.h"

UFortPetAnimInstanceShared::UFortPetAnimInstanceShared() {
    DeltaTime = 1;
    bAreActiveFlagChangesPending = false;
    OwnerFortPawn = NULL;
    OwnerPet = NULL;
    bIsOnGround = false;
    bIsFrontEndPreview = false;
    bLobbySkyDive_IsDiving = false;
}

