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
    this->AntiGravityScalerWhenEmpty = 1;
    this->AntiGravityScalerWhenCoasting = 1;
    this->SpringCompressionRefireTime = 1;
    this->MovementAmountParam = 1;
    this->CurrentMaxSpringCompression = 1;
    this->SparksLeftParam = 1;
    this->SparksRightParam = 1;
    this->LeftSlowDustParam = 1;
    this->RightSlowDustParam = 1;
    this->LeftFastDustParam = 1;
    this->RightFastDustParam = 1;
    this->FastDustParam = 1;
    this->CoastingMovementParam = 1;
    this->SkiddingAmountParam = 1;
    this->InAirParam = 1;
    this->ScrapingAmountParam = 1;
    this->AudioWindParam = 1;
    this->SKPushVehicleConfigsClass = NULL;
    this->SKPushVehicleConfigs = NULL;
    this->CacheAudioMovement = NULL;
    this->CacheAudioCoast = NULL;
    this->CacheAudioSkid = NULL;
    this->CacheAudioInAir = NULL;
    this->CacheAudioScrape = NULL;
    this->CacheAudioWind = NULL;
    this->CacheWheelDustFX = NULL;
}

