#include "FortDagwoodVehicle.h"
#include "FortAthenaVehicleFuelComponent.h"
#include "FortSplatterSourceComponent.h"
#include "Net/UnrealNetwork.h"

void AFortDagwoodVehicle::UpdateVehicleFuelLeak() {
}

void AFortDagwoodVehicle::StartFade() {
}

void AFortDagwoodVehicle::SetOnFire(bool bNewFire) {
}

void AFortDagwoodVehicle::SetNormalizedAudioRPM(float InRPM) {
}

void AFortDagwoodVehicle::SetFuel(float NewFuel) {
}

void AFortDagwoodVehicle::ServerSetRuntimeSpringsInfo(const FRuntimeSpringsInfo& SpringsInfo) {
}

void AFortDagwoodVehicle::ServerSetRuntimeProperties(const FVehicleRuntimeModifiers& RunTimeProps) {
}

void AFortDagwoodVehicle::ServerSetRuntimeGravity(float GravMult) {
}

void AFortDagwoodVehicle::ServerSetRuntimeFuelInfo(const FRuntimeFuelInfo& FuelInfo) {
}

void AFortDagwoodVehicle::ServerSetRuntimeDriveInfo(float MaxIncline, float MaxTilt) {
}

void AFortDagwoodVehicle::ServerSetRuntimeBoostInfo(const FRuntimeBoostInfo& BoostInfo) {
}

void AFortDagwoodVehicle::ServerAddRuntimeGearsInfo(const FRuntimeGearInfo& GearInfo) {
}









void AFortDagwoodVehicle::OnRep_Tires(const TArray<ETireStates>& PrevTireStates) {
}

void AFortDagwoodVehicle::OnRep_RuntimeModifiers() {
}

void AFortDagwoodVehicle::OnRep_RandSeed() {
}

void AFortDagwoodVehicle::OnRep_PoppedTireReaction() {
}

void AFortDagwoodVehicle::OnRep_IsInoperable() {
}

void AFortDagwoodVehicle::OnRep_Exploded() {
}

void AFortDagwoodVehicle::OnPoppedTire(int32 TireIndex) {
}



















void AFortDagwoodVehicle::NativeOnOutOfFuel() {
}

void AFortDagwoodVehicle::NativeOnLowFuel() {
}

void AFortDagwoodVehicle::NativeOnFuelChanged(float NewFuelPercent, float OldFuelPercent) {
}

float AFortDagwoodVehicle::NativeCalculateAccelRumbleIntensity(float MaxIntensity) const {
    return 0.0f;
}

void AFortDagwoodVehicle::MakeOperable(bool bAddGas) {
}

void AFortDagwoodVehicle::MakeInoperable() {
}

bool AFortDagwoodVehicle::IsVehicleAcceleratingWithSpeedThreshold(float SpeedThreshold) const {
    return false;
}

bool AFortDagwoodVehicle::IsTireSkidding(const float MinSpeedForSkid, const float AngleForSkid, const float SpeedForPeelout, const float SpeedForBraking) const {
    return false;
}

bool AFortDagwoodVehicle::IsOnRoad() const {
    return false;
}

bool AFortDagwoodVehicle::IsOnLandscape() const {
    return false;
}

bool AFortDagwoodVehicle::IsOnDirt() const {
    return false;
}

bool AFortDagwoodVehicle::IsOffroad() const {
    return false;
}

bool AFortDagwoodVehicle::IsNativeBPTickEnabled() const {
    return false;
}

bool AFortDagwoodVehicle::IsInoperable() const {
    return false;
}

ETireSurfaces AFortDagwoodVehicle::GetTireSurface(ETireLocations TireIndex) const {
    return ETireSurfaces::Road;
}

bool AFortDagwoodVehicle::GetTireState(int32 TireIndex) const {
    return false;
}

float AFortDagwoodVehicle::GetTireHealthPercent(ETireLocations TireIndex) const {
    return 0.0f;
}

FString AFortDagwoodVehicle::GetPlayerFacingName() const {
    return TEXT("");
}

bool AFortDagwoodVehicle::GetOnFire() const {
    return false;
}

float AFortDagwoodVehicle::GetNormalizedAudioRPM() const {
    return 0.0f;
}

float AFortDagwoodVehicle::GetHUDTopSpeed() const {
    return 0.0f;
}

float AFortDagwoodVehicle::GetFuelCapacity() const {
    return 0.0f;
}

float AFortDagwoodVehicle::GetFuel() const {
    return 0.0f;
}

FVehicleRuntimeModifiers AFortDagwoodVehicle::GetCurrentRuntimeProperties() {
    return FVehicleRuntimeModifiers{};
}

float AFortDagwoodVehicle::GetBumpiness() const {
    return 0.0f;
}

bool AFortDagwoodVehicle::ForwardOrReverseInputPressed() const {
    return false;
}




bool AFortDagwoodVehicle::AreAnyTiresPopped() const {
    return false;
}

void AFortDagwoodVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortDagwoodVehicle, RechargeableBoostPercent);
    DOREPLIFETIME(AFortDagwoodVehicle, RuntimeModifiedProperties);
    DOREPLIFETIME(AFortDagwoodVehicle, TireStates);
    DOREPLIFETIME(AFortDagwoodVehicle, ServerPoppedTireReaction);
    DOREPLIFETIME(AFortDagwoodVehicle, bExploded);
    DOREPLIFETIME(AFortDagwoodVehicle, bIsInoperable);
    DOREPLIFETIME(AFortDagwoodVehicle, RandomSeed);
}

AFortDagwoodVehicle::AFortDagwoodVehicle() {
    this->HardLandingCameraShake = NULL;
    this->OffroadCamShakeClass = NULL;
    this->DriverCamShakeClass = NULL;
    this->HandBrakeCamShakeClass = NULL;
    this->VehicleClass = EVehicleClass::Sedan;
    this->NativeMinPontoonRadiusToSink = 1;
    this->NativePontoonScaleTimeFront = 1;
    this->NativePontoonScaleRadiusPerTick = 1;
    this->NativePontoonScaleTimeRear = 1;
    this->NativeBasePontoonRadiusFront = 1;
    this->NativeBasePontoonRadiusRear = 1;
    this->FadeDelay = 1;
    this->FadeDuration = 1;
    this->MinBrakeForceForSkid = 1;
    this->MinForwardSpeedForSkid = 1;
    this->NormalizedRPM = 1;
    this->FadeStartTime = 1;
    this->RechargeableBoostPercent = 1;
    this->BoostEndTime = 1;
    this->SplatterSourceComp = CreateDefaultSubobject<UFortSplatterSourceComponent>(TEXT("SplatterSourceComp"));
    this->FuelLeakType = EFuelLeakType::None;
    this->bEnableNativizedTick = false;
    this->PassengerCameraModeClass = NULL;
    this->PassengerCameraModeClass_ADS = NULL;
    this->FortDagwoodVehicleConfigs = NULL;
    this->FortDagwoodConfigsClass = NULL;
    this->bTireSmokeActive = false;
    this->bBoostFailed = false;
    this->bCanBoostPitch = false;
    this->bOnRoad = false;
    this->bOnLandscape = false;
    this->bOnDirt = false;
    this->bOnVehicle = false;
    this->bWasBrakeSkidding = false;
    this->AccelForceFeedbackHandle = 0;
    this->SkidForceFeedbackHandle = 0;
    this->BrakeForceFeedbackHandle = 0;
    this->HandBrakeForceFeedbackHandle = 0;
    this->bBoosting = false;
    this->bSpeedLinesActive = false;
    this->LastPoppedTire = ETireLocations::FrontRight;
    this->RoadTopSpeedMultplier = 1;
    this->CurrentBumpiness = 1;
    this->CurrentForwardAcceleration = 1;
    this->PreviousTurnAlpha = 1;
    this->CurrentCameraAssistStrength = 1;
    this->LostGripTime = 1;
    this->LostGripRightAlpha = 1;
    this->HandbrakeTime = 1;
    this->RimScrapeDamageTimer = 1;
    this->FlipYawMult = 1;
    this->FlipTimer = 1;
    this->FlipExplodeTimer = 1;
    this->FlipPushForceTimer = 1;
    this->FlipAirTimer = 1;
    this->FlipLanding = 1;
    this->FlipStartTime = 1;
    this->LastFlipDamageTime = 1;
    this->PreFlipControlLossTimer = 1;
    this->LastPopTireTime = 1;
    this->HealthZeroTime = 1;
    this->NativePontoonScaleTimerFront = 1;
    this->NativePontoonScaleTimerRear = 1;
    this->NativeScaledFrontPontoonRadius = 1;
    this->NativeScaledRearPontoonRadius = 1;
    this->bDidCinematicFlip = false;
    this->bCanCinematicFlip = true;
    this->bInPopTireVeer = false;
    this->bInFlipRecovery = false;
    this->bExplodeAfterFlip = false;
    this->bLostGrip = false;
    this->bApplyHandBrakeCatchupForce = false;
    this->bDidHandbrakeCatchup = false;
    this->bInFlipRoll = false;
    this->bInFlipYaw = false;
    this->bInFlipPitch = false;
    this->bFlipDidLeaveGround = false;
    this->bBreakBuildingsIfBlockingLeaningPassenger = true;
    this->LeanBreakTimeAccumulator = 1;
    this->LeanBreakCheckInterval = 1;
    this->SeatToWindowShapeNames.AddDefaulted(4);
    this->OffroadCameraShakeInstance = NULL;
    this->DriverCameraShakeInstance = NULL;
    this->AccelCameraShakeInstance = NULL;
    this->HandBrakeCameraShakeInstance = NULL;
    this->NativeComp_RoadAndExhaust = NULL;
    this->NativeComp_LowFuelSputter = NULL;
    this->NativeComp_Damage = NULL;
    this->NativeComp_SpeedLines = NULL;
    this->TireExhaustFX = NULL;
    this->NativeSys_LowFuelSputter = NULL;
    this->NativeSys_SpeedLines = NULL;
    this->FuelComponent = CreateDefaultSubobject<UFortAthenaVehicleFuelComponent>(TEXT("FuelComponent"));
    this->ActivePoppedTireReaction = EPoppedTireReactionStates::None;
    this->ServerPoppedTireReaction = EPoppedTireReactionStates::None;
    this->bExploded = false;
    this->ServerCriticalHealth = 1;
    this->bIsInoperable = false;
    this->RandomSeed = 0;
    this->TireBootMesh = NULL;
}

