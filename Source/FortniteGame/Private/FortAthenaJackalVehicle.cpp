#include "FortAthenaJackalVehicle.h"

void AFortAthenaJackalVehicle::OnWeaponUnholstered() {
}




void AFortAthenaJackalVehicle::OnHeldObjectPickedUp(AActor* HeldObject) {
}

void AFortAthenaJackalVehicle::OnHeldObjectDropped(AActor* HeldObject) {
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
    FortJackalVehicleConfigsClass = NULL;
    FortJackalVehicleConfigs = NULL;
    NumBoostTimers = 0;
    BoostTimers.AddDefaulted(1);
    SprintCameraModeClass = NULL;
    BoostCameraModeClass = NULL;
    JumpCharge = 1;
    JumpCooldownRemaining = 1;
    CacheBoostFX = NULL;
    CacheLoopingFX = NULL;
    BoostMID = NULL;
    CacheAudioMovement = NULL;
    CacheAudioBoost = NULL;
    CacheAudioWind = NULL;
    BoostingAnimClass = NULL;
}

