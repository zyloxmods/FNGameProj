#include "FortGliderAnimInstance.h"

void UFortGliderAnimInstance::SetGliderFullyDeployed(bool bIsFullyDeployed) {
}

UFortGliderAnimInstance::UFortGliderAnimInstance() {
    this->DeltaTime = 1;
    this->OwnerGlider = NULL;
    this->OwnerFortPawn = NULL;
    this->bIsAccelerating2D = false;
    this->bForceOpen = false;
    this->bForceOpen_SkipInto = false;
}

