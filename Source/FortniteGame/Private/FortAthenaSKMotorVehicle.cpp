#include "FortAthenaSKMotorVehicle.h"


bool AFortAthenaSKMotorVehicle::IsStandingInPlace() const {
    return false;
}

bool AFortAthenaSKMotorVehicle::HasTraction() const {
    return false;
}

float AFortAthenaSKMotorVehicle::GetStandingInPlaceSteeringAngle() const {
    return 0.0f;
}

bool AFortAthenaSKMotorVehicle::GasPedalIsDown() const {
    return false;
}

AFortAthenaSKMotorVehicle::AFortAthenaSKMotorVehicle() {
    this->AntiGravityScalerWhenEmpty = 1.00f;
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
}

