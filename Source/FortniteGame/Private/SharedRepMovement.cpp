#include "SharedRepMovement.h"

FSharedRepMovement::FSharedRepMovement() {
    this->RepTimeStamp = 0.00f;
    this->RemoteViewData32 = 0;
    this->AccelerationPack = 0;
    this->AccelerationZPack = 0;
    this->RepMovementMode = 0;
    this->JumpFlashCountPacked = 0;
    this->LandingFlashCountPacked = 0;
    this->CurrentMovementStyle = EFortMovementStyle::Running;
    this->bProxyIsJumpForceApplied = false;
    this->bIsCrouched = false;
    this->bIsSkydiving = false;
    this->bIsParachuteOpen = false;
    this->bIsSlopeSliding = false;
    this->bIsProxySimulationTimedOut = false;
    this->bIsTargeting = false;
}

