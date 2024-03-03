#include "FortHardyAnimInstance.h"

UFortHardyAnimInstance::UFortHardyAnimInstance() {
    this->VentSpinRateDirect = 1;
    this->RoamingDeltaYawOffsetRemapA = 1;
    this->RoamingDeltaYawOffsetRemapB = 1;
    this->NeckXRotOffset = 1;
    this->NeckRotationOffsetSpeed = 1;
    this->NeckTurnAlpha = 1;
    this->NeckTurnTarget = 1;
    this->NeckRotationSpeed = 1;
    this->RoamingDeltaYawDurationRemapA = 1;
    this->RoamingDeltaYawDurationRemapB = 1;
    this->EyeAccentAlpha = 1;
    this->EyeAccentInterpSpeed = 1;
    this->EyeAccentDurationWhenCanNotEyeDart = 1;
    this->EyeAccentDurationWhenCanEyeDart = 1;
    this->EyeLaunchPoseCurveName = TEXT("Eye_Launch_Pose");
    this->EyeLaunchPoseMaxPitch = 1;
    this->TargetActor = NULL;
    this->TargetPawn = NULL;
    this->HardyEyeSocketName = TEXT("Eye");
    this->DisableEyeTrackingCurveName = TEXT("DisableEyeTracking");
    this->EyeTrackingTargetSpeed = 1;
    this->EyeTrackingTargetAlpha = 1;
    this->HardyHeadSocketName = TEXT("head");
    this->DisableHeadTrackingCurveName = TEXT("DisableHeadTracking");
    this->HeadTrackingTargetSpeed = 1;
    this->HeadTrackingTargetAlpha = 1;
    this->TurnDirection = ESkydivingDirection::Center;
    this->HeadingAngle = 1;
    this->RoamingDesiredYaw = 1;
    this->RoamingCurrentYaw = 1;
    this->RoamingDeltaYaw = 1;
    this->RoamingDeltaYawSnapshot = 1;
    this->bIsStopped = false;
    this->bIsTurning = false;
    this->bCanStartTurning = true;
    this->bHasTarget = false;
    this->bCanEyeDart = false;
}

