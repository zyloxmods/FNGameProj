#include "FortPlayerCameraBase.h"
#include "FortUICameraManagerComponent.h"

AFortPlayerCameraBase::AFortPlayerCameraBase() {
    this->CurrentAbilitySpecifiedCameraClass = NULL;
    this->UICamera = CreateDefaultSubobject<UFortUICameraManagerComponent>(TEXT("UICamera"));
    this->Base3PClass = NULL;
    this->Targeting3PClass = NULL;
    this->OverrideCameraClass = NULL;
    this->CinematicCameraClass = NULL;
    this->DBNOCameraClass = NULL;
    this->DBNOCarriedCameraClass = NULL;
    this->DeathCameraClass = NULL;
    this->RespawnedInAirCameraClass = NULL;
    this->SkydiveGlideCameraClass = NULL;
    this->SkydiveDiveCameraClass = NULL;
    this->SkydiveParachuteCameraClass = NULL;
    this->HoverboardCameraClass = NULL;
    this->WaterSprintBoostCameraClass = NULL;
    this->FocalPointCameraClass = NULL;
    this->TetheredTargeting3PClass = NULL;
    this->RCActorCameraClass = NULL;
    this->ZoomPostProcessVolume = NULL;
}

