#include "FortVehicleAimingWeaponComp.h"
#include "Net/UnrealNetwork.h"

void UFortVehicleAimingWeaponComp::OnRep_TargetLocalAimOrientationRepped() {
}

void UFortVehicleAimingWeaponComp::OnRep_TargetLocalAimOrientationCorrectedRepped() {
}

void UFortVehicleAimingWeaponComp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortVehicleAimingWeaponComp, TargetLocalAimOrientationRepped);
    DOREPLIFETIME(UFortVehicleAimingWeaponComp, TargetLocalAimOrientationCorrectedRepped);
}

UFortVehicleAimingWeaponComp::UFortVehicleAimingWeaponComp() {
    bShouldResetCameraHorizontallyToBarrelWhenEntered = false;
    bShouldResetCameraVerticallyToBarrelWhenEntered = true;
    StartCameraResetToBarrelTime = 1;
    bAllowCameraLocalVerticalRotationOnly = false;
    AimBlendInSpeed = 1;
    AimBlendOutSpeed = 1;
    bSetDesiredPitchWhenUnmanned = false;
    bSetDesiredYawWhenUnmanned = false;
    bUseGlobalOnlyAiming = false;
    RotCyclesPerFullTurnHoriz = 1;
    RotCyclesPerFullTurnVert = 1;
    bCorrectAimFromCameraToMuzzle = false;
    YawDiffRemaining = 1;
    PitchDiffRemaining = 1;
    bInterpolateAimToDesired = true;
    LastTickTime = 1;
    TickCount = 0;
    CameraAimBlendFactor = 1;
    UnmannedDesiredPitch = 1;
    UnmannedDesiredYaw = 1;
    HorizAimRotDelta = 1;
    VertAimRotDelta = 1;
    AimSourceType = EFortAbilityTargetingSource::Camera;
    bPlayerEnteredThisFrame = false;
    bApplyOwnerRotationToAimWhenUnmanned = false;
    MaxYawPerSecondThreshold = 1;
    MaxPitchPerSecondThreshold = 1;
    PitchConstraintAngleOffset = 1;
    AimInterpSpeed = 1;
    InitialCameraInterpSpeed = 1;
    InitialCameraLerpTime = 1;
    MinDistanceForCorrection = 1;
}

