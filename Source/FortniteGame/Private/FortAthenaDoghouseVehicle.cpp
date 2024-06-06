#include "FortAthenaDoghouseVehicle.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaDoghouseVehicle::ServerUpdateControlState_Implementation(FReplicatedControlState InControlState) {
}
bool AFortAthenaDoghouseVehicle::ServerUpdateControlState_Validate(FReplicatedControlState InControlState) {
    return true;
}

void AFortAthenaDoghouseVehicle::ServerBeginAileronRoll_Implementation(EAileronRollDirection Direction) {
}
bool AFortAthenaDoghouseVehicle::ServerBeginAileronRoll_Validate(EAileronRollDirection Direction) {
    return true;
}


void AFortAthenaDoghouseVehicle::OnRep_ControlState() {
}




void AFortAthenaDoghouseVehicle::MultiBeginAileronRoll_Implementation(EAileronRollDirection Direction) {
}

bool AFortAthenaDoghouseVehicle::IsStandingInPlace() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsStallingFromAltitude() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsRollingRight() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsRollingLeft() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsRollingInverted() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsFreelooking() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsFlying() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsEngineOn() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsEngineAutoStartingInAir() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsAileronRolling() const {
    return false;
}

float AFortAthenaDoghouseVehicle::GetStandingInPlaceSteeringAngle() const {
    return 0.0f;
}

FVector AFortAthenaDoghouseVehicle::GetShootCenterPointLocal() {
    return FVector{};
}

FVector AFortAthenaDoghouseVehicle::GetShootCenterPoint() {
    return FVector{};
}

FVector AFortAthenaDoghouseVehicle::GetFlightControlTorque() const {
    return FVector{};
}

FFlightControlSurfaces AFortAthenaDoghouseVehicle::GetFlightControlSurfaceTargets() const {
    return FFlightControlSurfaces{};
}

FFlightControlSurfaces AFortAthenaDoghouseVehicle::GetFlightControlSurfaces() const {
    return FFlightControlSurfaces{};
}

FVector AFortAthenaDoghouseVehicle::GetFlightControlForce() const {
    return FVector{};
}

float AFortAthenaDoghouseVehicle::GetAltitudeZ() const {
    return 0.0f;
}

FVector AFortAthenaDoghouseVehicle::GetAimPointLocal() {
    return FVector{};
}

FVector AFortAthenaDoghouseVehicle::GetAimPoint() {
    return FVector{};
}

EAileronRollDirection AFortAthenaDoghouseVehicle::GetAileronRollDirection() const {
    return EAileronRollDirection::None;
}

bool AFortAthenaDoghouseVehicle::GasPedalIsDown() const {
    return false;
}

void AFortAthenaDoghouseVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaDoghouseVehicle, ControlState);
}

AFortAthenaDoghouseVehicle::AFortAthenaDoghouseVehicle() {
    AntiGravityScalerWhenEmpty = 1;
    CameraPitchInterpSpeed = 1;
    CameraYawInterpSpeed = 1;
    PropSpeed = 1;
    PropRotation = 1;
    BoostTopSpeedKmh = 1;
    BoostThrust = 1;
    AirbrakeDragCoefficient = 1;
    HardRollHeadingMatchRate = 1;
    HardRollHeadingSteerRate = 1;
    HardRollOffsetPercent = 1;
    DivebombSpeedMinKmh = 1;
    DivebombSpeedMaxKmh = 1;
    DivebombSteerPitchRate = 1;
    DivebombHeadingMatchRate = 1;
    AileronRollMatchRate = 1;
    AileronRollRotationalDampingCoefficient = 1;
    AileronRollMaxRotationalDampingTorque = 1;
    TimeBeforeStallWithNoPassengersInAir = 1;
    TimeBeforeStallWithNoPassengersOnGround = 1;
    AileronRollDoubleClickSpeed = 1;
    bFreelookAutoRecenter = false;
    FreelookPitchConstraintDegrees = 1;
    FreelookYawConstraintDegrees = 1;
    FreelookSensitivity = 1;
    MouseSteerSensitivity = 1;
    FreelookInterpolation = 1;
    FreelookReturnAcceleration = 1;
    FreelookReturnDecelleration = 1;
    ShootAimAheadDistance = 1;
}

