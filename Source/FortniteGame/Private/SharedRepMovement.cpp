#include "SharedRepMovement.h"

FSharedRepMovement::FSharedRepMovement() {
    this->RepTimeStamp = 1;
    this->TurretYaw = 1;
    this->TurretPitch = 1;
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
    this->bIsWaterJump = false;
    this->bIsWaterSprintBoost = false;
    this->bIsWaterSprintBoostPending = false;
}

