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
    AntiGravityScalerWhenEmpty = 1;
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
}

