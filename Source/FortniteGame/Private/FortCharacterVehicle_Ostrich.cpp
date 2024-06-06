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
    bExplodeOnDetonate = true;
    LandingMovementLockDurationMin = 1;
    LandingMovementLockDurationMax = 1;
    KneelingGunnerSeatVerticalOffset = 1;
    KneelingDriverSeatVerticalOffset = 1;
    OstrichShieldBoostStatName = TEXT("OstrichShieldBoostActivations");
    PassengerCameraFixedVerticalOffset = 1;
    PassengerCameraFixedVerticalOffsetNoDriver = 1;
    DriverPrimaryCooldownTime = 1;
    DriverSecondaryCooldownTime = 1;
    DetonateDelay = 1;
    DetonateDelaySelfDestruct = 1;
    DetonateRange = 1;
    DriverKickMoveLockDuration = 1;
    KickRootMotionDelay = 1;
    KickRootMotionDuration = 1;
    ShieldBoostCooldown = 1;
    ShieldRadius = 1;
    SelfDestructInteractDuration = 1;
    AccelFromIdle = 1;
    AccelFromIdleDuration = 1;
    IdleTimeThreshold = 1;
    LockoutDurationAfterRequestSeatChange = 1;
    MaxBeamLen = 1;
    DriverToGunnerTransition = NULL;
    GunnerToDriverTransition = NULL;
    bChargingJump = false;
    bDriverLocalChargingJump = false;
    bChargingRockets = false;
    bAutomaticallyFiringShotgun = false;
    DetonationState = EOstrichDetonationState::None;
    bLocalSimulatedChargingJump = false;
    bDashing = false;
    bKickRep = false;
    bLoadingRockets = false;
    bKickActive = false;
    bLocalJumpButtonDown = false;
    bAllowEnter = true;
    bAcceleratingFromIdle = false;
    IdleTime = 1;
    MovingTime = 1;
    RequestSeatChangeTime = 1;
    ChargeJumpStartTime = 1;
    GroundDashStartTime = 1;
    ShieldBoostStartTime = 1;
    KickStartTime = 1;
    SpawnedBeam = NULL;
    SpawnedImpact = NULL;
    SpawnedImpactEnemy = NULL;
    SpawnedSource = NULL;
    BlendedPassengerVerticalCamOffset = 1;
    OverrideLandingMoveLockDuration = 1;
    ShieldBoostResourceCost = 0;
    KickAnimationDuration = 1;
    DestroyDelayAfterExplosion = 1;
    PawnRotationRate = 1;
    AirDashOverrideAngle = 1;
    GunnerAimPointUpdateRate = 1;
    GunnerAimPointTraceRange = 1;
    GroundDashAnimationDuration = 1;
    GunnerAimPointUpdateDelay = 1;
    MechMissileDamageToGunnerShield = 1;
    SimulatedProxyFixupRange = 1;
    bEnableTargetingLaser = true;
    bEnableSimulatedProxyFixup = true;
    DriverChargeJumpCamera = NULL;
    BeamTemplate = NULL;
    BeamHitTemplate = NULL;
    BeamHitEnemyTemplate = NULL;
    BeamSourceTemplate = NULL;
    PassengerCamBlendTarget = 1;
    GunnerAimpointUpdateTimer = 1;
    bDriverPrimaryCooldownReady = true;
    bDriverSecondaryCooldownReady = true;
    bBufferedDriverExit = false;
    bHoldingSelfDestruct = false;
    bLocalDriverRequestedExit = false;
    bLocalPrimaryFireButtonDown = false;
    bLocalSecondaryFireButtonDown = false;
    bEmoteAudioForceStopped = false;
    bAimedAtEnemy = false;
    bAimedAtSky = false;
    NativeLinearMovementAudio = NULL;
    NativeRotationalMovementAudio = NULL;
    NativeTargetingLaserAudio = NULL;
    FortOstrichVehicleConfigsClass = NULL;
    FortOstrichVehicleConfigs = NULL;
    PickupCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("PickupCollisionCapsule"));
    OstrichCustomStats = NULL;
}

