#include "FortPlayerCameraBase.h"
#include "FortUICameraManagerComponent.h"

AFortPlayerCameraBase::AFortPlayerCameraBase() {
    CurrentAbilitySpecifiedCameraClass = NULL;
    UICamera = CreateDefaultSubobject<UFortUICameraManagerComponent>(TEXT("UICamera"));
    Base3PClass = NULL;
    Targeting3PClass = NULL;
    OverrideCameraClass = NULL;
    CinematicCameraClass = NULL;
    DBNOCameraClass = NULL;
    DBNOCarriedCameraClass = NULL;
    DeathCameraClass = NULL;
    RespawnedInAirCameraClass = NULL;
    SkydiveGlideCameraClass = NULL;
    SkydiveDiveCameraClass = NULL;
    SkydiveParachuteCameraClass = NULL;
    HoverboardCameraClass = NULL;
    WaterSprintBoostCameraClass = NULL;
    FocalPointCameraClass = NULL;
    TetheredTargeting3PClass = NULL;
    RCActorCameraClass = NULL;
    ZoomPostProcessVolume = NULL;
}

