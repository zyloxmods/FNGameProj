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
    this->AntiGravityScalerWhenEmpty = 1;
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
}

