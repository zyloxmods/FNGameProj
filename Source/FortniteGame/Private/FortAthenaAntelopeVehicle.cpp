#include "FortAthenaAntelopeVehicle.h"
#include "Particles/ParticleSystemComponent.h"



void AFortAthenaAntelopeVehicle::SetSkidActive(bool bActive) {
}



bool AFortAthenaAntelopeVehicle::IsSmashing() const {
    return false;
}

bool AFortAthenaAntelopeVehicle::IsPassivelyExpendingBoost() const {
    return false;
}

bool AFortAthenaAntelopeVehicle::IsNaturalSliding() const {
    return false;
}

bool AFortAthenaAntelopeVehicle::IsLocalPlayerRiding() const {
    return false;
}

bool AFortAthenaAntelopeVehicle::IsLeaningOrBouncingBack() const {
    return false;
}

bool AFortAthenaAntelopeVehicle::IsInBoostSmashForgivenessPeriod() const {
    return false;
}

bool AFortAthenaAntelopeVehicle::IsBoosting() const {
    return false;
}

bool AFortAthenaAntelopeVehicle::IsAccumulatingBoost() const {
    return false;
}

float AFortAthenaAntelopeVehicle::GetBoostAccumulated() const {
    return 0.0f;
}

FName AFortAthenaAntelopeVehicle::GetAntelopeReverseActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

FName AFortAthenaAntelopeVehicle::GetAntelopeHonkActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

FName AFortAthenaAntelopeVehicle::GetAntelopeForwardActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

void AFortAthenaAntelopeVehicle::ClearBoostAccumulated() {
}

void AFortAthenaAntelopeVehicle::CacheWheelBlurStaticMeshes(UStaticMeshComponent* InBL, UStaticMeshComponent* InBR, UStaticMeshComponent* InFL, UStaticMeshComponent* InFR) {
}

void AFortAthenaAntelopeVehicle::CacheParticleComponentPointers(UParticleSystemComponent* WheelDust, UParticleSystemComponent* WheelSlide, UParticleSystemComponent* TrailLeft, UParticleSystemComponent* TrailRight, UParticleSystemComponent* InEngineReady) {
}

void AFortAthenaAntelopeVehicle::CacheBoostSM(UStaticMeshComponent* InBoost) {
}

void AFortAthenaAntelopeVehicle::CacheAudioPointers(UFortVehicleAudioVoice* InAudioEngineRevUp, UFortVehicleAudioVoice* InAudioSkid, UFortVehicleAudioVoice* InAudioScrape, UFortVehicleAudioVoice* InAudioWind, UFortVehicleAudioVoice* InAudioBoost, UFortVehicleAudioVoice* InAudioHandbrakeSkid, UFortVehicleAudioVoice* InAudioBoostCharge, UFortVehicleAudioVoice* InAudioEngineIdle) {
}




AFortAthenaAntelopeVehicle::AFortAthenaAntelopeVehicle() {
    this->LeanPositionFrontMaxLag = 1;
    this->LeanPositionFrontLagCoefficient = 1;
    this->LeanImpulseScaleBack = 1;
    this->BounceCurve = NULL;
    this->HandBrakeSkidParam = 1;
    this->BoostParam = 1;
    this->MovementParam = 1;
    this->BatteryParam = 1;
    this->RumbleIntensity = 1;
    this->bBoostCameraActive = false;
    this->bLocalPlayerADS = false;
    this->DriverCameraShake = NULL;
    this->PassengerCameraShake = NULL;
    this->LocalPlayerPawn = NULL;
    this->PSC_Boost_Flames = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("P_Boost_Flames"));
    this->CachedSkidValue = 1;
    this->CachedAudioEngineRevUp = NULL;
    this->CachedAudioSkid = NULL;
    this->CachedAudioScrape = NULL;
    this->CachedAudioWind = NULL;
    this->CachedAudioBoost = NULL;
    this->CachedAudioHandbrakeSkid = NULL;
    this->CachedAudioBoostCharge = NULL;
    this->CachedAudioEngineIdle = NULL;
    this->bOutOfRangeAudioParamsSet = false;
    this->bBudgetBasedAudioParamsCleared = false;
    this->BoostMeterMID = NULL;
    this->BodyMID = NULL;
    this->PSC_ATV_Engine_Ready = NULL;
    this->PS_Sputtering_Flames_Template = NULL;
    this->bHaveTriggeredBoostFX = false;
    this->bIsUsingSputteringFlamesTemplate = false;
    this->bAreWheelsIced = false;
    this->RenderingDetailMode = 0;
    this->CacheWheelsBackOpacity = 1;
    this->CacheWheelsFrontOpacity = 1;
    this->WheelBlursFront = NULL;
    this->WheelBlursBack = NULL;
    this->WheelBlur_BL = NULL;
    this->WheelBlur_BR = NULL;
    this->WheelBlur_FL = NULL;
    this->WheelBlur_FR = NULL;
    this->PSC_WheelDust = NULL;
    this->PSC_WheelSlide = NULL;
    this->PSC_TrailLeft = NULL;
    this->PSC_TrailRight = NULL;
    this->FortAntelopeVehicleConfigsClass = NULL;
    this->bPlayingBoostFX = false;
    this->bPlayingBoostFXForward = true;
    this->BoostFXTime = 1;
    this->BoostFXFOVOffset = 1;
    this->BoostFXStrengthCurve = NULL;
    this->BoostFXRumbleStrengthCurve = NULL;
    this->FortAntelopeVehicleConfigs = NULL;
}

