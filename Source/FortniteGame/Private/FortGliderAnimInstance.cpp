#include "FortGliderAnimInstance.h"

void UFortGliderAnimInstance::SetGliderFullyDeployed(bool bIsFullyDeployed) {
}

UFortGliderAnimInstance::UFortGliderAnimInstance() {
    DeltaTime = 1;
    OwnerGlider = NULL;
    OwnerFortPawn = NULL;
    bIsAccelerating2D = false;
    bForceOpen = false;
    bForceOpen_SkipInto = false;
}

