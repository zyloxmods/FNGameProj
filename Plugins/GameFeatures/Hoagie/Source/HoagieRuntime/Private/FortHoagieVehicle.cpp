#include "FortHoagieVehicle.h"
#include "FortAthenaVehicleFuelComponent.h"
#include "Net/UnrealNetwork.h"

void AFortHoagieVehicle::UpdateDamageStateNative(float Damage) {
}




void AFortHoagieVehicle::ServerUpdateControlState_Implementation(FReplicatedHeliControlState InControlState) {
}










void AFortHoagieVehicle::OnRep_IsUsingNewFuelSystemState() {
}

void AFortHoagieVehicle::OnRep_HoagieState() {
}

void AFortHoagieVehicle::OnRep_ControlState() {
}

void AFortHoagieVehicle::OnRefueledFromEmpty() {
}









void AFortHoagieVehicle::MulticastRotorImpulse_Implementation(const FHitResult& RotorHit) {
}

bool AFortHoagieVehicle::IsStartingUp() const {
    return false;
}

bool AFortHoagieVehicle::IsShuttingDown() const {
    return false;
}

bool AFortHoagieVehicle::IsScrapingBottom() const {
    return false;
}

float AFortHoagieVehicle::GetVerticalSpeedKmh() const {
    return 0.0f;
}

FVector AFortHoagieVehicle::GetThrustDirection(bool bWorldSpace) const {
    return FVector{};
}

float AFortHoagieVehicle::GetStrafeAlpha() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetSteerAlpha() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetShutdownTimeLeft() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetRotorSpeedPercent() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetRotorSpeed() const {
    return 0.0f;
}

FVector AFortHoagieVehicle::GetRotorCenterPosition() const {
    return FVector{};
}

float AFortHoagieVehicle::GetRotorAngleDegrees() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetMaxBoostCooldown() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetMaxAltitude() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetLiftAlpha() const {
    return 0.0f;
}

bool AFortHoagieVehicle::GetIsEngineOn() const {
    return false;
}

bool AFortHoagieVehicle::GetIsCriticalHealth() const {
    return false;
}

float AFortHoagieVehicle::GetForwardAlpha() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetDistanceToGround() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetBoostTimeLeft() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetBoostDuration() const {
    return 0.0f;
}

FVector AFortHoagieVehicle::GetBoostDirection() const {
    return FVector{};
}

float AFortHoagieVehicle::GetBoostCooldown() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetAltitude() const {
    return 0.0f;
}

void AFortHoagieVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortHoagieVehicle, HoagieStateRep);
    DOREPLIFETIME(AFortHoagieVehicle, IsUsingNewFuelSystemState);
    DOREPLIFETIME(AFortHoagieVehicle, ControlState);
}

AFortHoagieVehicle::AFortHoagieVehicle() {
    this->CameraBoomDistance = 1;
    this->CameraBoomHeight = 1;
    this->LiftRumbleTimer = 1;
    this->bLiftUp = false;
    this->LiftForceFeedbackHandle = 0;
    this->PassiveForceFeedbackHandle = 0;
    this->Theta_Native = 1;
    this->WashAltAlpha_Native = 1;
    this->RotorWashTickTimer = 1;
    this->FortHoagieVehicleConfigs = NULL;
    this->RumbleIntensity = NULL;
    this->bClearPitchInput = true;
    this->bBoosting = false;
    this->BoostTimeLeft = 1;
    this->BoostBrakingTimeLeft = 1;
    this->BoostCooldown = 1;
    this->ShutdownTimer = 1;
    this->FoliageDestructionTimer = 1;
    this->CrashingScrapingTimer = 1;
    this->CrashingNotMovingTimer = 1;
    this->bCanSleep = true;
    this->bHasAppliedCrashDamage = false;
    this->bOrientedForLanding = false;
    this->bForceNegativeLift = false;
    this->bExploded = false;
    this->AltimeterTraceTimer = 1;
    this->LastRotorImpulseTime = 1;
    this->CriticalExplodeTimer = 1;
    this->TimeWhileCritical = 1;
    this->TimeWhileLanding = 1;
    this->LiftFromOverrideButton = 1;
    this->HoagieStateRep = 0;
    this->CurrentRotorSpeed = 1;
    this->CurrentRotorAngle = 1;
    this->RotorImpactTraceAngle = 1;
    this->MoveUpPressTime = 1;
    this->MoveDownPressTime = 1;
    this->ServerCriticalHealth = 1;
    this->FuelComponent = CreateDefaultSubobject<UFortAthenaVehicleFuelComponent>(TEXT("FuelComponent"));
    this->IsUsingNewFuelSystemState = 0;
    this->HoagieIdleFX_Native = NULL;
    this->DamageFX_Native = NULL;
    this->RotorWashFX_Native = NULL;
    this->HoagieAnimBP_Native = NULL;
    this->FortHoagieVehicleConfigsClass = NULL;
    this->SeatTransition_ToDriver = NULL;
    this->SeatTransition_ToPassenger = NULL;
    this->CurrentViewDistanceScale = 1;
    this->CurrentHLODDistanceOverrideScale = 1;
    this->CurrentHLODMaxDrawDistanceScale = 1;
}

