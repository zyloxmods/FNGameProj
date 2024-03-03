#include "FortAthenaGoatVehicle.h"

void AFortAthenaGoatVehicle::SetSkidActive(bool bActive) {
}



bool AFortAthenaGoatVehicle::IsPowerSliding() const {
    return false;
}

bool AFortAthenaGoatVehicle::IsLocalPlayerRiding() const {
    return false;
}

bool AFortAthenaGoatVehicle::IsLeaningOrBouncingFR() const {
    return false;
}

bool AFortAthenaGoatVehicle::IsLeaningOrBouncingBR() const {
    return false;
}

bool AFortAthenaGoatVehicle::IsLeaningOrBouncingBL() const {
    return false;
}

bool AFortAthenaGoatVehicle::IsEBraking() const {
    return false;
}

bool AFortAthenaGoatVehicle::IsBoosting() const {
    return false;
}

FName AFortAthenaGoatVehicle::GetGolfCartReverseActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

FName AFortAthenaGoatVehicle::GetGolfCartHonkActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

FName AFortAthenaGoatVehicle::GetGolfCartForwardActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

FName AFortAthenaGoatVehicle::GetGolfCartEBrakeActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

float AFortAthenaGoatVehicle::GetBoostAccumulated() const {
    return 0.0f;
}



void AFortAthenaGoatVehicle::ClearBoostAccumulated() {
}

void AFortAthenaGoatVehicle::CacheParticleComponentPointers(UParticleSystemComponent* WheelDust, UParticleSystemComponent* WheelSlide, UParticleSystemComponent* TrailLeft, UParticleSystemComponent* TrailRight) {
}




AFortAthenaGoatVehicle::AFortAthenaGoatVehicle() {
    this->LeanImpulseScaleFR = 1;
    this->LeanImpulseScaleBR = 1;
    this->LeanImpulseScaleBL = 1;
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
    this->PSC_WheelDust = NULL;
    this->PSC_WheelSlide = NULL;
    this->PSC_TrailLeft = NULL;
    this->PSC_TrailRight = NULL;
    this->FortGoatVehicleConfigsClass = NULL;
    this->FortGoatVehicleConfigs = NULL;
}

