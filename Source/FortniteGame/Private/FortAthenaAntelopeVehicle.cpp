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

FName AFortAthenaAntelopeVehicle::GetVehicleJumpActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

FName AFortAthenaAntelopeVehicle::GetGolfCartReverseActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

FName AFortAthenaAntelopeVehicle::GetGolfCartHonkActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

FName AFortAthenaAntelopeVehicle::GetGolfCartForwardActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

float AFortAthenaAntelopeVehicle::GetBoostAccumulated() const {
    return 0.0f;
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
    this->LeanPositionFrontMaxLag = 30.00f;
    this->LeanPositionFrontLagCoefficient = 0.10f;
    this->LeanImpulseScaleBack = 10.00f;
    this->BounceCurve = NULL;
    this->HandBrakeSkidParam = 0.00f;
    this->BoostParam = 0.00f;
    this->MovementParam = 0.00f;
    this->BatteryParam = 0.00f;
    this->RumbleIntensity = 0.00f;
    this->bBoostCameraActive = false;
    this->bLocalPlayerADS = false;
    this->DriverCameraShake = NULL;
    this->PassengerCameraShake = NULL;
    this->LocalPlayerPawn = NULL;
    this->PSC_Boost_Flames = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("P_Boost_Flames"));
    this->CachedSkidValue = 0.00f;
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
    this->RenderingDetailMode = 2;
    this->CacheWheelsBackOpacity = 0.00f;
    this->CacheWheelsFrontOpacity = 0.00f;
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
    this->BoostFXTime = 0.00f;
    this->BoostFXFOVOffset = 20.00f;
    this->BoostFXStrengthCurve = NULL;
    this->BoostFXRumbleStrengthCurve = NULL;
    this->FortAntelopeVehicleConfigs = NULL;
}

