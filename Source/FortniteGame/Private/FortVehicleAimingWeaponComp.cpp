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
    this->StartCameraResetToBarrelTime = 0.00f;
    this->bAllowCameraLocalVerticalRotationOnly = false;
    this->AimBlendInSpeed = 3.00f;
    this->AimBlendOutSpeed = 3.00f;
    this->bSetDesiredPitchWhenUnmanned = false;
    this->bSetDesiredYawWhenUnmanned = false;
    this->bUseGlobalOnlyAiming = false;
    this->RotCyclesPerFullTurnHoriz = 3.00f;
    this->RotCyclesPerFullTurnVert = 3.00f;
    this->bCorrectAimFromCameraToMuzzle = false;
    this->YawDiffRemaining = 0.00f;
    this->PitchDiffRemaining = 0.00f;
    this->bInterpolateAimToDesired = true;
    this->LastTickTime = 0.00f;
    this->TickCount = 0;
    this->CameraAimBlendFactor = 0.00f;
    this->UnmannedDesiredPitch = -70.00f;
    this->UnmannedDesiredYaw = 0.00f;
    this->HorizAimRotDelta = 0.00f;
    this->VertAimRotDelta = 0.00f;
    this->AimSourceType = EFortAbilityTargetingSource::Camera;
    this->bPlayerEnteredThisFrame = false;
    this->MaxYawPerSecondThreshold = 800.00f;
    this->MaxPitchPerSecondThreshold = 800.00f;
    this->PitchConstraintAngleOffset = -25.00f;
    this->AimInterpSpeed = 19.00f;
    this->InitialCameraInterpSpeed = 7.00f;
    this->InitialCameraLerpTime = 0.50f;
}

