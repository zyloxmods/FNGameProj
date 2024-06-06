#include "SharedRepMovement.h"

FSharedRepMovement::FSharedRepMovement() {
    RepTimeStamp = 1;
    TurretYaw = 1;
    TurretPitch = 1;
    RemoteViewData32 = 0;
    AccelerationPack = 0;
    AccelerationZPack = 0;
    RepMovementMode = 0;
    JumpFlashCountPacked = 0;
    LandingFlashCountPacked = 0;
    CurrentMovementStyle = EFortMovementStyle::Running;
    bProxyIsJumpForceApplied = false;
    bIsCrouched = false;
    bIsSkydiving = false;
    bIsParachuteOpen = false;
    bIsSlopeSliding = false;
    bIsProxySimulationTimedOut = false;
    bIsTargeting = false;
    bIsWaterJump = false;
    bIsWaterSprintBoost = false;
    bIsWaterSprintBoostPending = false;
}

