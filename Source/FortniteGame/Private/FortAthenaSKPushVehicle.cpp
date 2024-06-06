#include "FortAthenaSKPushVehicle.h"

bool AFortAthenaSKPushVehicle::PlayerWantsToCoast(bool bCheckAnimOnlyCoast) const {
    return false;
}



bool AFortAthenaSKPushVehicle::IsStandingInPlace() const {
    return false;
}

bool AFortAthenaSKPushVehicle::IsReadyToPedalFromCoast() const {
    return false;
}

bool AFortAthenaSKPushVehicle::IsMounting() const {
    return false;
}

bool AFortAthenaSKPushVehicle::IsEndCoasting() const {
    return false;
}

bool AFortAthenaSKPushVehicle::IsDismountingFromCoast() const {
    return false;
}

bool AFortAthenaSKPushVehicle::IsCoasting() const {
    return false;
}

bool AFortAthenaSKPushVehicle::IsApplyingPedalForce() const {
    return false;
}

float AFortAthenaSKPushVehicle::GetStandingInPlaceSteeringAngle() const {
    return 0.0f;
}

FName AFortAthenaSKPushVehicle::GetShoppingCartCoastActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

ECoastState AFortAthenaSKPushVehicle::GetCoastState(bool bGetPhysicsState) const {
    return ECoastState::Idle;
}

void AFortAthenaSKPushVehicle::CacheFX(UParticleSystemComponent* InWheelDustFX) {
}

void AFortAthenaSKPushVehicle::CacheAudioPointers(UFortVehicleAudioVoice* InAudioMovement, UFortVehicleAudioVoice* InAudioCoast, UFortVehicleAudioVoice* InAudioSkid, UFortVehicleAudioVoice* InAudioInAir, UFortVehicleAudioVoice* InAudioScrape, UFortVehicleAudioVoice* InAudioWind) {
}

AFortAthenaSKPushVehicle::AFortAthenaSKPushVehicle() {
    AntiGravityScalerWhenEmpty = 1;
    AntiGravityScalerWhenCoasting = 1;
    SpringCompressionRefireTime = 1;
    MovementAmountParam = 1;
    CurrentMaxSpringCompression = 1;
    SparksLeftParam = 1;
    SparksRightParam = 1;
    LeftSlowDustParam = 1;
    RightSlowDustParam = 1;
    LeftFastDustParam = 1;
    RightFastDustParam = 1;
    FastDustParam = 1;
    CoastingMovementParam = 1;
    SkiddingAmountParam = 1;
    InAirParam = 1;
    ScrapingAmountParam = 1;
    AudioWindParam = 1;
    SKPushVehicleConfigsClass = NULL;
    SKPushVehicleConfigs = NULL;
    CacheAudioMovement = NULL;
    CacheAudioCoast = NULL;
    CacheAudioSkid = NULL;
    CacheAudioInAir = NULL;
    CacheAudioScrape = NULL;
    CacheAudioWind = NULL;
    CacheWheelDustFX = NULL;
}

