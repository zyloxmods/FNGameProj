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
    LeanPositionFrontMaxLag = 1;
    LeanPositionFrontLagCoefficient = 1;
    LeanImpulseScaleBack = 1;
    BounceCurve = NULL;
    HandBrakeSkidParam = 1;
    BoostParam = 1;
    MovementParam = 1;
    BatteryParam = 1;
    RumbleIntensity = 1;
    bBoostCameraActive = false;
    bLocalPlayerADS = false;
    DriverCameraShake = NULL;
    PassengerCameraShake = NULL;
    LocalPlayerPawn = NULL;
    PSC_Boost_Flames = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("P_Boost_Flames"));
    CachedSkidValue = 1;
    CachedAudioEngineRevUp = NULL;
    CachedAudioSkid = NULL;
    CachedAudioScrape = NULL;
    CachedAudioWind = NULL;
    CachedAudioBoost = NULL;
    CachedAudioHandbrakeSkid = NULL;
    CachedAudioBoostCharge = NULL;
    CachedAudioEngineIdle = NULL;
    bOutOfRangeAudioParamsSet = false;
    bBudgetBasedAudioParamsCleared = false;
    BoostMeterMID = NULL;
    BodyMID = NULL;
    PSC_ATV_Engine_Ready = NULL;
    PS_Sputtering_Flames_Template = NULL;
    bHaveTriggeredBoostFX = false;
    bIsUsingSputteringFlamesTemplate = false;
    bAreWheelsIced = false;
    RenderingDetailMode = 0;
    CacheWheelsBackOpacity = 1;
    CacheWheelsFrontOpacity = 1;
    WheelBlursFront = NULL;
    WheelBlursBack = NULL;
    WheelBlur_BL = NULL;
    WheelBlur_BR = NULL;
    WheelBlur_FL = NULL;
    WheelBlur_FR = NULL;
    PSC_WheelDust = NULL;
    PSC_WheelSlide = NULL;
    PSC_TrailLeft = NULL;
    PSC_TrailRight = NULL;
    FortAntelopeVehicleConfigsClass = NULL;
    bPlayingBoostFX = false;
    bPlayingBoostFXForward = true;
    BoostFXTime = 1;
    BoostFXFOVOffset = 1;
    BoostFXStrengthCurve = NULL;
    BoostFXRumbleStrengthCurve = NULL;
    FortAntelopeVehicleConfigs = NULL;
}

