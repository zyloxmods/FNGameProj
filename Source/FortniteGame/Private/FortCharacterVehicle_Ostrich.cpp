#include "FortCharacterVehicle_Ostrich.h"
#include "Components/CapsuleComponent.h"
#include "Net/UnrealNetwork.h"

void AFortCharacterVehicle_Ostrich::SetTargetingLaserAudioComp(UAudioComponent* TargetingLaserAudio) {
}

void AFortCharacterVehicle_Ostrich::SetShieldActor(AActor* InShieldActor) {
}

void AFortCharacterVehicle_Ostrich::SetRotationalAudioComp(UFortVehicleAudioVoice* RotAudio) {
}

void AFortCharacterVehicle_Ostrich::SetLinearAudioComp(UFortVehicleAudioVoice* LinearAudio) {
}

void AFortCharacterVehicle_Ostrich::ServerSetJumpCharging_Implementation(bool bNewCharging) {
}
bool AFortCharacterVehicle_Ostrich::ServerSetJumpCharging_Validate(bool bNewCharging) {
    return true;
}

void AFortCharacterVehicle_Ostrich::ServerNotifyDriverInput_Implementation(bool bIsPrimaryFire) {
}
bool AFortCharacterVehicle_Ostrich::ServerNotifyDriverInput_Validate(bool bIsPrimaryFire) {
    return true;
}

void AFortCharacterVehicle_Ostrich::OnStartShotgunReload() {
}


void AFortCharacterVehicle_Ostrich::OnRep_Kick() {
}

void AFortCharacterVehicle_Ostrich::OnRep_IsDashing() {
}

void AFortCharacterVehicle_Ostrich::OnRep_Detonating() {
}

void AFortCharacterVehicle_Ostrich::OnRep_ChargeJump() {
}




void AFortCharacterVehicle_Ostrich::OnPickupCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void AFortCharacterVehicle_Ostrich::OnKickStomp() {
}

void AFortCharacterVehicle_Ostrich::OnKickFinished() {
}





void AFortCharacterVehicle_Ostrich::OnDashStart() {
}

void AFortCharacterVehicle_Ostrich::OnDashFinished() {
}



void AFortCharacterVehicle_Ostrich::MulticastDriverInput_Implementation(bool bIsPrimaryFire) {
}

bool AFortCharacterVehicle_Ostrich::IsShotgunReloading() const {
    return false;
}

bool AFortCharacterVehicle_Ostrich::IsRocketOnCooldown() const {
    return false;
}


bool AFortCharacterVehicle_Ostrich::IsFiringRockets() const {
    return false;
}


float AFortCharacterVehicle_Ostrich::GetJumpChargeCursor() const {
    return 0.0f;
}

bool AFortCharacterVehicle_Ostrich::GetIsDashing() const {
    return false;
}

bool AFortCharacterVehicle_Ostrich::GetIsChargingJump() const {
    return false;
}

AFortWeaponRanged_Ostrich* AFortCharacterVehicle_Ostrich::GetGunnerWeapon() {
    return NULL;
}

float AFortCharacterVehicle_Ostrich::GetGunnerAimAngleDelta() const {
    return 0.0f;
}


float AFortCharacterVehicle_Ostrich::GetDriverTurnAngleDelta() const {
    return 0.0f;
}

bool AFortCharacterVehicle_Ostrich::GetDashAnimationActive() const {
    return false;
}


FVector AFortCharacterVehicle_Ostrich::GetAimPoint() const {
    return FVector{};
}

void AFortCharacterVehicle_Ostrich::GameplayCue_Athena_Ostrich_Reload() {
}

void AFortCharacterVehicle_Ostrich::GameplayCue_Athena_Ostrich_LoadSingleRocket(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortCharacterVehicle_Ostrich::GameplayCue_Athena_Ostrich_Load() {
}

void AFortCharacterVehicle_Ostrich::GameplayCue_Athena_Ostrich_Fire_Stop() {
}

void AFortCharacterVehicle_Ostrich::GameplayCue_Athena_Ostrich_Fire_Start() {
}

void AFortCharacterVehicle_Ostrich::GameplayCue_Athena_Ostrich_Fire_Single(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortCharacterVehicle_Ostrich::ForceDetonate(bool bExplode) {
}

void AFortCharacterVehicle_Ostrich::AirDash(const FVector& InDirection, float Speed, float MinVerticalSpeed) {
}

void AFortCharacterVehicle_Ostrich::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortCharacterVehicle_Ostrich, ShieldActor);
    DOREPLIFETIME(AFortCharacterVehicle_Ostrich, bChargingJump);
    DOREPLIFETIME(AFortCharacterVehicle_Ostrich, bChargingRockets);
    DOREPLIFETIME(AFortCharacterVehicle_Ostrich, bAutomaticallyFiringShotgun);
    DOREPLIFETIME(AFortCharacterVehicle_Ostrich, DetonationState);
    DOREPLIFETIME(AFortCharacterVehicle_Ostrich, bDashing);
    DOREPLIFETIME(AFortCharacterVehicle_Ostrich, bKickRep);
    DOREPLIFETIME(AFortCharacterVehicle_Ostrich, CachedWeaponState);
}

AFortCharacterVehicle_Ostrich::AFortCharacterVehicle_Ostrich() {
    this->bExplodeOnDetonate = true;
    this->LandingMovementLockDurationMin = 1;
    this->LandingMovementLockDurationMax = 1;
    this->KneelingGunnerSeatVerticalOffset = 1;
    this->KneelingDriverSeatVerticalOffset = 1;
    this->OstrichShieldBoostStatName = TEXT("OstrichShieldBoostActivations");
    this->PassengerCameraFixedVerticalOffset = 1;
    this->PassengerCameraFixedVerticalOffsetNoDriver = 1;
    this->DriverPrimaryCooldownTime = 1;
    this->DriverSecondaryCooldownTime = 1;
    this->DetonateDelay = 1;
    this->DetonateDelaySelfDestruct = 1;
    this->DetonateRange = 1;
    this->DriverKickMoveLockDuration = 1;
    this->KickRootMotionDelay = 1;
    this->KickRootMotionDuration = 1;
    this->ShieldBoostCooldown = 1;
    this->ShieldRadius = 1;
    this->SelfDestructInteractDuration = 1;
    this->AccelFromIdle = 1;
    this->AccelFromIdleDuration = 1;
    this->IdleTimeThreshold = 1;
    this->LockoutDurationAfterRequestSeatChange = 1;
    this->MaxBeamLen = 1;
    this->DriverToGunnerTransition = NULL;
    this->GunnerToDriverTransition = NULL;
    this->bChargingJump = false;
    this->bDriverLocalChargingJump = false;
    this->bChargingRockets = false;
    this->bAutomaticallyFiringShotgun = false;
    this->DetonationState = EOstrichDetonationState::None;
    this->bLocalSimulatedChargingJump = false;
    this->bDashing = false;
    this->bKickRep = false;
    this->bLoadingRockets = false;
    this->bKickActive = false;
    this->bLocalJumpButtonDown = false;
    this->bAllowEnter = true;
    this->bAcceleratingFromIdle = false;
    this->IdleTime = 1;
    this->MovingTime = 1;
    this->RequestSeatChangeTime = 1;
    this->ChargeJumpStartTime = 1;
    this->GroundDashStartTime = 1;
    this->ShieldBoostStartTime = 1;
    this->KickStartTime = 1;
    this->SpawnedBeam = NULL;
    this->SpawnedImpact = NULL;
    this->SpawnedImpactEnemy = NULL;
    this->SpawnedSource = NULL;
    this->BlendedPassengerVerticalCamOffset = 1;
    this->OverrideLandingMoveLockDuration = 1;
    this->ShieldBoostResourceCost = 0;
    this->KickAnimationDuration = 1;
    this->DestroyDelayAfterExplosion = 1;
    this->PawnRotationRate = 1;
    this->AirDashOverrideAngle = 1;
    this->GunnerAimPointUpdateRate = 1;
    this->GunnerAimPointTraceRange = 1;
    this->GroundDashAnimationDuration = 1;
    this->GunnerAimPointUpdateDelay = 1;
    this->MechMissileDamageToGunnerShield = 1;
    this->SimulatedProxyFixupRange = 1;
    this->bEnableTargetingLaser = true;
    this->bEnableSimulatedProxyFixup = true;
    this->DriverChargeJumpCamera = NULL;
    this->BeamTemplate = NULL;
    this->BeamHitTemplate = NULL;
    this->BeamHitEnemyTemplate = NULL;
    this->BeamSourceTemplate = NULL;
    this->PassengerCamBlendTarget = 1;
    this->GunnerAimpointUpdateTimer = 1;
    this->bDriverPrimaryCooldownReady = true;
    this->bDriverSecondaryCooldownReady = true;
    this->bBufferedDriverExit = false;
    this->bHoldingSelfDestruct = false;
    this->bLocalDriverRequestedExit = false;
    this->bLocalPrimaryFireButtonDown = false;
    this->bLocalSecondaryFireButtonDown = false;
    this->bEmoteAudioForceStopped = false;
    this->bAimedAtEnemy = false;
    this->bAimedAtSky = false;
    this->NativeLinearMovementAudio = NULL;
    this->NativeRotationalMovementAudio = NULL;
    this->NativeTargetingLaserAudio = NULL;
    this->FortOstrichVehicleConfigsClass = NULL;
    this->FortOstrichVehicleConfigs = NULL;
    this->PickupCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("PickupCollisionCapsule"));
    this->OstrichCustomStats = NULL;
}

