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
    this->AntiGravityScalerWhenEmpty = 1.00f;
    this->CameraPitchInterpSpeed = 1.00f;
    this->CameraYawInterpSpeed = 5.00f;
    this->PropSpeed = 0.00f;
    this->PropRotation = 0.00f;
    this->BoostTopSpeedKmh = 75.00f;
    this->BoostThrust = 4000.00f;
    this->AirbrakeDragCoefficient = 1.00f;
    this->HardRollHeadingMatchRate = 70.00f;
    this->HardRollHeadingSteerRate = 90.00f;
    this->HardRollOffsetPercent = 0.45f;
    this->DivebombSpeedMinKmh = 40.00f;
    this->DivebombSpeedMaxKmh = 70.00f;
    this->DivebombSteerPitchRate = 115.00f;
    this->DivebombHeadingMatchRate = 80.00f;
    this->AileronRollMatchRate = 125.00f;
    this->AileronRollRotationalDampingCoefficient = 0.75f;
    this->AileronRollMaxRotationalDampingTorque = 300.00f;
    this->TimeBeforeStallWithNoPassengersInAir = 2.50f;
    this->TimeBeforeStallWithNoPassengersOnGround = 2.50f;
    this->AileronRollDoubleClickSpeed = 0.25f;
    this->bFreelookAutoRecenter = false;
    this->FreelookPitchConstraintDegrees = 40.00f;
    this->FreelookYawConstraintDegrees = 90.00f;
    this->FreelookSensitivity = 2.00f;
    this->MouseSteerSensitivity = 1.00f;
    this->FreelookInterpolation = 12.50f;
    this->FreelookReturnAcceleration = 0.10f;
    this->FreelookReturnDecelleration = 0.10f;
    this->ShootAimAheadDistance = 3000.00f;
}

