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
    LeanImpulseScaleFR = 1;
    LeanImpulseScaleBR = 1;
    LeanImpulseScaleBL = 1;
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
    PSC_WheelDust = NULL;
    PSC_WheelSlide = NULL;
    PSC_TrailLeft = NULL;
    PSC_TrailRight = NULL;
    FortGoatVehicleConfigsClass = NULL;
    FortGoatVehicleConfigs = NULL;
}

