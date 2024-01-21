#include "FortAthenaJackalVehicle.h"

void AFortAthenaJackalVehicle::OnWeaponUnholstered() {
}







void AFortAthenaJackalVehicle::NativeOnBoostEnd() {
}

void AFortAthenaJackalVehicle::NativeOnBoostBegin() {
}

bool AFortAthenaJackalVehicle::IsDriveModeOnly() const {
    return false;
}

bool AFortAthenaJackalVehicle::IsBoosting() const {
    return false;
}

bool AFortAthenaJackalVehicle::GetSpringHitLocation(int32 SpringIndex, FVector& HitLocation) const {
    return false;
}

FFortRechargingActionTimer AFortAthenaJackalVehicle::GetCurrentBoostTimer() {
    return FFortRechargingActionTimer{};
}

int32 AFortAthenaJackalVehicle::GetBoostCandidateIndex() const {
    return 0;
}

void AFortAthenaJackalVehicle::CheckWater(float WaterLocationZ, UParticleSystemComponent* WaterFX, UAudioComponent* WaterAudio) {
}

bool AFortAthenaJackalVehicle::CanJump() const {
    return false;
}

bool AFortAthenaJackalVehicle::CanChargeJump() const {
    return false;
}

bool AFortAthenaJackalVehicle::CanBoost() const {
    return false;
}

bool AFortAthenaJackalVehicle::CanActivateBoost() const {
    return false;
}

void AFortAthenaJackalVehicle::CacheFX(UParticleSystemComponent* InBoostFX, UParticleSystemComponent* InLoopingFX) {
}

void AFortAthenaJackalVehicle::CacheAudioPointers(UFortVehicleAudioVoice* InAudioMovement, UFortVehicleAudioVoice* InAudioBoost, UFortVehicleAudioVoice* InAudioWind) {
}

AFortAthenaJackalVehicle::AFortAthenaJackalVehicle() {
    this->FortJackalVehicleConfigsClass = NULL;
    this->FortJackalVehicleConfigs = NULL;
    this->NumBoostTimers = 1;
    this->BoostTimers.AddDefaulted(1);
    this->SprintCameraModeClass = NULL;
    this->BoostCameraModeClass = NULL;
    this->JumpCharge = 0.00f;
    this->JumpCooldownRemaining = 0.00f;
    this->CacheBoostFX = NULL;
    this->CacheLoopingFX = NULL;
    this->BoostMID = NULL;
    this->CacheAudioMovement = NULL;
    this->CacheAudioBoost = NULL;
    this->CacheAudioWind = NULL;
    this->BoostingAnimClass = NULL;
}

