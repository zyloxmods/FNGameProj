#include "FortPlayerCameraBase.h"

AFortPlayerCameraBase::AFortPlayerCameraBase() {
    this->CurrentAbilitySpecifiedCameraClass = NULL;
    this->Base3PClass = NULL;
    this->Targeting3PClass = NULL;
    this->OverrideCameraClass = NULL;
    this->CinematicCameraClass = NULL;
    this->DBNOCameraClass = NULL;
    this->DeathCameraClass = NULL;
    this->RespawnedInAirCameraClass = NULL;
    this->SkydiveGlideCameraClass = NULL;
    this->SkydiveDiveCameraClass = NULL;
    this->SkydiveParachuteCameraClass = NULL;
    this->HoverboardCameraClass = NULL;
    this->ZoomPostProcessVolume = NULL;
}

