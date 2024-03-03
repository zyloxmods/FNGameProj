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
    this->AntiGravityScalerWhenEmpty = 1;
    this->CameraPitchInterpSpeed = 1;
    this->CameraYawInterpSpeed = 1;
    this->PropSpeed = 1;
    this->PropRotation = 1;
    this->BoostTopSpeedKmh = 1;
    this->BoostThrust = 1;
    this->AirbrakeDragCoefficient = 1;
    this->HardRollHeadingMatchRate = 1;
    this->HardRollHeadingSteerRate = 1;
    this->HardRollOffsetPercent = 1;
    this->DivebombSpeedMinKmh = 1;
    this->DivebombSpeedMaxKmh = 1;
    this->DivebombSteerPitchRate = 1;
    this->DivebombHeadingMatchRate = 1;
    this->AileronRollMatchRate = 1;
    this->AileronRollRotationalDampingCoefficient = 1;
    this->AileronRollMaxRotationalDampingTorque = 1;
    this->TimeBeforeStallWithNoPassengersInAir = 1;
    this->TimeBeforeStallWithNoPassengersOnGround = 1;
    this->AileronRollDoubleClickSpeed = 1;
    this->bFreelookAutoRecenter = false;
    this->FreelookPitchConstraintDegrees = 1;
    this->FreelookYawConstraintDegrees = 1;
    this->FreelookSensitivity = 1;
    this->MouseSteerSensitivity = 1;
    this->FreelookInterpolation = 1;
    this->FreelookReturnAcceleration = 1;
    this->FreelookReturnDecelleration = 1;
    this->ShootAimAheadDistance = 1;
}

