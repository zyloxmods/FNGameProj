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
    this->bShouldResetCameraHorizontallyToBarrelWhenEntered = false;
    this->bShouldResetCameraVerticallyToBarrelWhenEntered = true;
    this->StartCameraResetToBarrelTime = 1;
    this->bAllowCameraLocalVerticalRotationOnly = false;
    this->AimBlendInSpeed = 1;
    this->AimBlendOutSpeed = 1;
    this->bSetDesiredPitchWhenUnmanned = false;
    this->bSetDesiredYawWhenUnmanned = false;
    this->bUseGlobalOnlyAiming = false;
    this->RotCyclesPerFullTurnHoriz = 1;
    this->RotCyclesPerFullTurnVert = 1;
    this->bCorrectAimFromCameraToMuzzle = false;
    this->YawDiffRemaining = 1;
    this->PitchDiffRemaining = 1;
    this->bInterpolateAimToDesired = true;
    this->LastTickTime = 1;
    this->TickCount = 0;
    this->CameraAimBlendFactor = 1;
    this->UnmannedDesiredPitch = 1;
    this->UnmannedDesiredYaw = 1;
    this->HorizAimRotDelta = 1;
    this->VertAimRotDelta = 1;
    this->AimSourceType = EFortAbilityTargetingSource::Camera;
    this->bPlayerEnteredThisFrame = false;
    this->bApplyOwnerRotationToAimWhenUnmanned = false;
    this->MaxYawPerSecondThreshold = 1;
    this->MaxPitchPerSecondThreshold = 1;
    this->PitchConstraintAngleOffset = 1;
    this->AimInterpSpeed = 1;
    this->InitialCameraInterpSpeed = 1;
    this->InitialCameraLerpTime = 1;
    this->MinDistanceForCorrection = 1;
}

