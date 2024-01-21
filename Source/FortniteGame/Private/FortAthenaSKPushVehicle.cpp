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

FName AFortAthenaSKPushVehicle::GetVehicleJumpActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
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
    this->AntiGravityScalerWhenEmpty = 1.00f;
    this->AntiGravityScalerWhenCoasting = 1.00f;
    this->SpringCompressionRefireTime = 0.10f;
    this->MovementAmountParam = 0.00f;
    this->CurrentMaxSpringCompression = 0.00f;
    this->SparksLeftParam = 0.00f;
    this->SparksRightParam = 0.00f;
    this->LeftSlowDustParam = 0.00f;
    this->RightSlowDustParam = 0.00f;
    this->LeftFastDustParam = 0.00f;
    this->RightFastDustParam = 0.00f;
    this->FastDustParam = 0.00f;
    this->CoastingMovementParam = 0.00f;
    this->SkiddingAmountParam = 0.00f;
    this->InAirParam = 0.00f;
    this->ScrapingAmountParam = 0.00f;
    this->AudioWindParam = 0.00f;
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

