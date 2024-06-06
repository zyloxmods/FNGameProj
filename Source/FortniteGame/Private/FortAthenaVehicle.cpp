#include "FortAthenaVehicle.h"
#include "FortDamageSet.h"
#include "FortVehicleSeatComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

bool AFortAthenaVehicle::WheelsOnGround() const {
    return false;
}


void AFortAthenaVehicle::WakeUpOnGroundDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaVehicle::WakeUp() {
}

bool AFortAthenaVehicle::VehicleIsInSkyTube() const {
    return false;
}

void AFortAthenaVehicle::UseOrExitReleasedFromSeat(const int32 FromSeatIndex) {
}

void AFortAthenaVehicle::UseOrExitPressedFromSeat(const int32 FromSeatIndex) {
}

void AFortAthenaVehicle::UpdateClientWithVehicleTestInput_Implementation(FVector LinearVelocity, FVector AngularVelocity) {
}

bool AFortAthenaVehicle::ShouldShowSoundIndicator_Implementation() const {
    return false;
}

void AFortAthenaVehicle::SetUnoccupiedAutoDestroy(float UnoccupiedTime) {
}

void AFortAthenaVehicle::SetSpringEnabled(const int32 SpringIndex, const bool bEnabled) {
}

void AFortAthenaVehicle::SetShootingCone(const int32 SeatIdx, FAthenaVehicleShootingCone InCone) {
}

void AFortAthenaVehicle::SetPropDestructionParams(TArray<TSubclassOf<ABuildingActor>> InBuildingPropClassesVehicleCanDestroy, TArray<TSubclassOf<ABuildingActor>> InBuildingPropClassesVehicleCannotDestroyWhenBoosting, TArray<UBuildingEditModeMetadata*> InWallsVehicleCanDestroy, TArray<UBuildingEditModeMetadata*> InWallsVehicleCannotDestroyWhenBoosting) {
}

void AFortAthenaVehicle::SetImpulseResponseZBias(const float ZBias) {
}

void AFortAthenaVehicle::SetImpulseResponseMultiplier(const float Multiplier) {
}

void AFortAthenaVehicle::SetIgnoreNextFallingDamage(bool bInIgnoreNextFallingDamage) {
}

void AFortAthenaVehicle::SetIgnoreAllFallingDamage(bool InIgnoreAllFallingDamage) {
}

void AFortAthenaVehicle::SetHealthPercent(float Percent) {
}

void AFortAthenaVehicle::SetDyingPhysics() {
}

void AFortAthenaVehicle::SetCurrentFocusedSocketLocation(const int32 SeatIndex) {
}

void AFortAthenaVehicle::SetAllowInteractionBetweenFortVolumes(bool bInteractBetweenVolumes) {
}

void AFortAthenaVehicle::SetActorBase(AActor* InActorBase, const int32 SeatIndex) {
}

void AFortAthenaVehicle::ServerUsingRiftPortal_Implementation(AActor* RiftPortal) {
}

void AFortAthenaVehicle::ServerStartFire_Implementation(uint8 FireModeNum) {
}

void AFortAthenaVehicle::ServerSetIgnoreNextFallingDamage_Implementation(bool InIgnoreNextFallingDamage) {
}

void AFortAthenaVehicle::ServerSetIgnoreAllFallingDamage_Implementation(bool InIgnoreAllFallingDamage) {
}

bool AFortAthenaVehicle::ServerOnAttemptInteract(const FInteractionType& InteractType) {
    return false;
}

bool AFortAthenaVehicle::SeatIsTurret(const int32 SeatIndex) const {
    return false;
}

void AFortAthenaVehicle::ResetTrick() {
}

bool AFortAthenaVehicle::RearLateralFrictionHasReachedMax() const {
    return false;
}

bool AFortAthenaVehicle::PlayerIsTryingToReverse() const {
    return false;
}

bool AFortAthenaVehicle::PlayerIsTryingToMoveForward() const {
    return false;
}


void AFortAthenaVehicle::OverridePontoonRadiusOnServer(int32 PontoonIndex, float NewRadius) {
}

void AFortAthenaVehicle::OverrideCurrentWrap(const UAthenaItemWrapDefinition* LoadedWrap) {
}






void AFortAthenaVehicle::OnRep_VehicleAttributes() {
}

void AFortAthenaVehicle::OnRep_SurfaceTypeVehicleOn(TEnumAsByte<EPhysicalSurface> PreviousSurfaceOn) {
}

void AFortAthenaVehicle::OnRep_PendingDeath() {
}

void AFortAthenaVehicle::OnRep_OverrideWrap() {
}

void AFortAthenaVehicle::OnRep_OnFire() {
}

void AFortAthenaVehicle::OnRep_LeakingFuel() {
}

void AFortAthenaVehicle::OnRep_IgnoredBuildingActors() {
}

void AFortAthenaVehicle::OnRep_HealthSet() {
}

void AFortAthenaVehicle::OnRep_DamageableParts(const TArray<FVehicleDamageablePart>& PrevDamageableParts) {
}

void AFortAthenaVehicle::OnRep_CorrectTargetOrientation() {
}

void AFortAthenaVehicle::OnRep_AbilitySystemComponent() {
}

void AFortAthenaVehicle::OnPxComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void AFortAthenaVehicle::OnPawnExitVehicle_Implementation(AFortPlayerPawn* PlayerPawn, FName ExitSocketName) {
}










void AFortAthenaVehicle::OnExitOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}



void AFortAthenaVehicle::OnEnterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}








float AFortAthenaVehicle::ModifyIncomingDamage(float Damage, const FGameplayTagContainer& InTags, const FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser) {
    return 0.0f;
}


bool AFortAthenaVehicle::IsSprinting() const {
    return false;
}

bool AFortAthenaVehicle::IsSlowEnoughToInteract() const {
    return false;
}

bool AFortAthenaVehicle::IsScrapingSidesOrTop() const {
    return false;
}

bool AFortAthenaVehicle::IsOverlappingWaterBody() const {
    return false;
}

bool AFortAthenaVehicle::IsOutOfFuel() const {
    return false;
}

bool AFortAthenaVehicle::IsMagnetizedForSkyTubes() const {
    return false;
}

bool AFortAthenaVehicle::IsJumping() const {
    return false;
}

bool AFortAthenaVehicle::IsInWaterBody() const {
    return false;
}

bool AFortAthenaVehicle::IsInWater() const {
    return false;
}

bool AFortAthenaVehicle::IsInSkyTube() const {
    return false;
}

bool AFortAthenaVehicle::IsInReverseGear() const {
    return false;
}

bool AFortAthenaVehicle::IsInAir() const {
    return false;
}

bool AFortAthenaVehicle::IsHonking() const {
    return false;
}

bool AFortAthenaVehicle::IsFuelBelowThreshold() const {
    return false;
}

bool AFortAthenaVehicle::IsCorrectingOrientation() const {
    return false;
}

bool AFortAthenaVehicle::IsCameraControlledRotation() const {
    return false;
}

bool AFortAthenaVehicle::IsBraking() const {
    return false;
}

bool AFortAthenaVehicle::IsAsleep() const {
    return false;
}

bool AFortAthenaVehicle::IsAirControlling() const {
    return false;
}

bool AFortAthenaVehicle::HasEverContainedPlayers() const {
    return false;
}

bool AFortAthenaVehicle::HasDriver() const {
    return false;
}

bool AFortAthenaVehicle::HasConstraints() const {
    return false;
}


FVector AFortAthenaVehicle::GetVehicleVelocity() const {
    return FVector{};
}

float AFortAthenaVehicle::GetTotalSpeedKmh() const {
    return 0.0f;
}

float AFortAthenaVehicle::GetSteeringAngle() const {
    return 0.0f;
}

FVector AFortAthenaVehicle::GetStandingFiringOffsetForSeat(const int32 SeatIdx) const {
    return FVector{};
}

float AFortAthenaVehicle::GetSpringLengthRatio(int32 SpringIdx) const {
    return 0.0f;
}

bool AFortAthenaVehicle::GetShootingCone(const int32 SeatIdx, FTransform& OutConeTM, FAthenaVehicleShootingCone& OutCone) const {
    return false;
}

UFortVehicleSeatWeaponComponent* AFortAthenaVehicle::GetSeatWeaponComponent(const int32 SeatIndex) const {
    return NULL;
}

float AFortAthenaVehicle::GetSeatSwitchCooldown(const int32 SeatIndex) const {
    return 0.0f;
}

FVector AFortAthenaVehicle::GetPreviousLinearVelocity() const {
    return FVector{};
}

FVector AFortAthenaVehicle::GetPreviousLinearAcceleration() const {
    return FVector{};
}

float AFortAthenaVehicle::GetPreviousForwardSpeedKmh() const {
    return 0.0f;
}

AFortPlayerPawn* AFortAthenaVehicle::GetPawnAtSeat(const int32 SeatIdx) const {
    return NULL;
}

float AFortAthenaVehicle::GetMaxHealth() const {
    return 0.0f;
}

FVector AFortAthenaVehicle::GetIndicatorRelativeOffset() const {
    return FVector{};
}

float AFortAthenaVehicle::GetHealth() const {
    return 0.0f;
}

float AFortAthenaVehicle::GetForwardSpeedKmh() const {
    return 0.0f;
}

AFortPlayerPawn* AFortAthenaVehicle::GetDriver() const {
    return NULL;
}

FString AFortAthenaVehicle::GetDisplayName() const {
    return TEXT("");
}

float AFortAthenaVehicle::GetDesiredForwardVelocityDelta() const {
    return 0.0f;
}

float AFortAthenaVehicle::GetDesiredForwardVelocity() const {
    return 0.0f;
}

float AFortAthenaVehicle::GetDesiredForwardSpeedKmh() const {
    return 0.0f;
}

float AFortAthenaVehicle::GetCurrentSignificance() const {
    return 0.0f;
}

int32 AFortAthenaVehicle::GetCurrentGear() const {
    return 0;
}

float AFortAthenaVehicle::GetCurrentFOV() const {
    return 0.0f;
}

float AFortAthenaVehicle::GetCurrentForwardVelocity() const {
    return 0.0f;
}

int32 AFortAthenaVehicle::GetCurrentBudget() const {
    return 0;
}

float AFortAthenaVehicle::GetCurrentBrakeForce(float ForwardSpeedKmH) const {
    return 0.0f;
}

FVector AFortAthenaVehicle::GetCrouchingFiringOffsetForSeat(const int32 SeatIdx) const {
    return FVector{};
}

float AFortAthenaVehicle::GetBrakingDelta() const {
    return 0.0f;
}

TArray<AFortPlayerPawn*> AFortAthenaVehicle::GetAllPassengers() const {
    return TArray<AFortPlayerPawn*>();
}

void AFortAthenaVehicle::GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortAthenaVehicle::GamepadUseOrExitReleasedFromSeat(const int32 FromSeatIndex) {
}

void AFortAthenaVehicle::GamepadUseOrExitPressedFromSeat(const int32 FromSeatIndex) {
}

int32 AFortAthenaVehicle::FindSeatIndex(const AFortPlayerPawn* PlayerPawn) const {
    return 0;
}

bool AFortAthenaVehicle::EjectSeat(const int32 SeatIndex) {
    return false;
}

bool AFortAthenaVehicle::EjectPlayerPawn(const AFortPlayerPawn* InPlayerPawn) {
    return false;
}

void AFortAthenaVehicle::EjectAllPlayers() {
}

void AFortAthenaVehicle::DisableTrickCredit(float Duration) {
}

void AFortAthenaVehicle::DestroyVehicle() {
}

void AFortAthenaVehicle::DestroyAllDamageableParts() {
}

void AFortAthenaVehicle::DemagnetizeFromSkyTube() {
}

void AFortAthenaVehicle::DebugDrawImpactBucket_Implementation(FVector Location, FVector ImpactVector, FColor Color) {
}

bool AFortAthenaVehicle::ContainsPlayers() const {
    return false;
}

bool AFortAthenaVehicle::ClientIsDriver() const {
    return false;
}

bool AFortAthenaVehicle::CanTeleport() const {
    return false;
}

bool AFortAthenaVehicle::CanShootFromSeat(const int32 SeatIndex) const {
    return false;
}

bool AFortAthenaVehicle::CanDriveOnIncline() const {
    return false;
}

bool AFortAthenaVehicle::CanCorrectOrientation(AFortPawn* FP) const {
    return false;
}

bool AFortAthenaVehicle::CanContainPlayers() const {
    return false;
}

bool AFortAthenaVehicle::CanAntigravityOnIncline() const {
    return false;
}

void AFortAthenaVehicle::BroadcastResetWaterIdleTimeEmpty_Implementation() {
}

void AFortAthenaVehicle::BroadcastAbilityImpactAtLocation_Implementation(UObject* WorldContextObject, USoundBase* InSound, UObject* InInstigator, const FVector& position, float Radius, FName Tag, const bool bSubtractLocalNoise) {
}

bool AFortAthenaVehicle::BP_CanInteract_Implementation(AFortPlayerController* FortPC) {
    return false;
}

bool AFortAthenaVehicle::BlocksBuilding() const {
    return false;
}

UMaterialInstanceDynamic* AFortAthenaVehicle::ApplyMaterialAndUseWrapIfPossible(UMaterialInterface* MaterialToUse, int32 SlotIndex, bool bAlwaysCreateMID) {
    return NULL;
}

bool AFortAthenaVehicle::AnyWheelsOnGround() const {
    return false;
}

bool AFortAthenaVehicle::AllowInteractionBetweenFortVolume() const {
    return false;
}

void AFortAthenaVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaVehicle, SoftOverrideItemWrap);
    DOREPLIFETIME(AFortAthenaVehicle, bPendingDeath);
    DOREPLIFETIME(AFortAthenaVehicle, bHasDriver);
    DOREPLIFETIME(AFortAthenaVehicle, bOnFire);
    DOREPLIFETIME(AFortAthenaVehicle, bLeakingFuel);
    DOREPLIFETIME(AFortAthenaVehicle, EmptyDriverInputState);
    DOREPLIFETIME(AFortAthenaVehicle, SurfaceTypeVehicleOn);
    DOREPLIFETIME(AFortAthenaVehicle, VehicleAttributes);
    DOREPLIFETIME(AFortAthenaVehicle, IgnoredBuildingActors);
    DOREPLIFETIME(AFortAthenaVehicle, DamageableParts);
    DOREPLIFETIME(AFortAthenaVehicle, CorrectTargetOrientation);
    DOREPLIFETIME(AFortAthenaVehicle, AbilitySystemComponent);
    DOREPLIFETIME(AFortAthenaVehicle, HealthSet);
}

AFortAthenaVehicle::AFortAthenaVehicle() {
    OverrideItemWrap = NULL;
    BoundsXYSplineComponent = NULL;
    IndicatorEnabled = true;
    bDestroyOnLastExit = false;
    bShowDamageNumbers = true;
    bShowDamageNumbersAtImpactLocation = false;
    bPlayDamageAudio = false;
    bShowVehicleHealthBarOnPlayerHUD = true;
    bDestroyBuildingSMActorOnForceExit = true;
    bIgnoreAllFallingDamage = false;
    bIgnoreNextFallingDamage = false;
    bIsBraking = false;
    bPlayedDying = false;
    bPendingDeath = false;
    bHasDriver = false;
    bAllowInteractBetweenFortVolumes = true;
    bCanPassengerPawnsTakeDamage = true;
    bOnFire = false;
    bLeakingFuel = false;
    bEnableCurieMaterial = false;
    bWaitingForSleep = false;
    bAllowInteractBetweenFortVolumes_Runtime = true;
    bTricksEnabled = true;
    FireDamageTickTimer = 1;
    CurrentFOV = 1;
    DriverReticleBrush = NULL;
    IndicatorAudibleDistance = 1;
    IndicatorIcon = NULL;
    WaterEffectsVehicleMaxSpeedKmh = 1;
    WaterEffectsAsset = NULL;
    WaterEffectsComponent = NULL;
    LastPropImpactImpulseTime = 1;
    PrimarySurfaceType = SurfaceType_Default;
    WeaponResponseType = EFortBaseWeaponDamage::Combat;
    VTDMode = 0;
    SurfaceTypeVehicleOn = SurfaceType_Default;
    ForcedMaterialVariantIndex = 0;
    SeatSwitchCooldown = 1;
    ForwardDrivingAntiGravityScaler = 1;
    CameraSpaceForwardDistanceOffset = 1;
    CameraAssistStrength = 1;
    CameraAssistRampUp = 1;
    TimeToAutoCamera = 1;
    CameraAssistBaseHeight = 1;
    CameraAssistUpHillScaler = 1;
    CameraAssistSteerScaler = 1;
    CameraAssistForwardScale = 1;
    MinSpeedForAutoCamera = 1;
    AngleDegreesThresholdFromCurrentCameraToTarget = 1;
    CameraFOVOffset = 1;
    TetheredCamera = NULL;
    PlayerCollisionGameplayEffect = NULL;
    OverlapComponent = NULL;
    WaterOverlapComponent = NULL;
    VehicleMinHorSpeedToDamage = 1;
    VehicleMaxHorSpeedToDamage = 1;
    VehicleMinHorSpeedDamage = 1;
    VehicleMaxHorSpeedDamage = 1;
    ImpulseResponseMultiplier = 1;
    ImpulseResponseZBias = 1;
    BrakeAboveTopSpeedDelta = 1;
    ChangeDirBrakeDelta = 1;
    TimeToIdleBrake = 1;
    DragCoefficient = 1;
    MaxRearLateralFriction = 1;
    MaxFrontLateralFriction = 1;
    PrimaryCameraPitchConstraint = 1;
    PrimaryCameraYawConstraint = 1;
    CachedSpeed = 1;
    TrickSet = NULL;
    WaterBodyOverlapComponent = NULL;
    DefaultHitNotifyAudioBank = NULL;
    BulletCollisionComponentTag = TEXT("BulletCollision");
    GEDamagePassengersOnDeath = NULL;
    LifespanAfterDeath = 1;
    LastDamagedTime = 1;
    EmoteAudioSourcePresetChain = NULL;
    EmoteAudioAttenuation = NULL;
    StartupAbilitySet = NULL;
    VehicleSeatComponent = CreateDefaultSubobject<UFortVehicleSeatComponent>(TEXT("VehicleSeatComponent"));
    SkyTubePhysicsComponent = NULL;
    PontoonsComponent = NULL;
    VehicleMovementSet = NULL;
    ImminentCollisionComponent = NULL;
    CameraModeClass = NULL;
    DrivingAnimClass = NULL;
    DriverAnimLayerOverlayClass = NULL;
    PassengerAnimLayerOverlayClass = NULL;
    AnimSet = NULL;
    AbilitySystemComponent = NULL;
    HealthSet = NULL;
    ImpulseResponseSet = NULL;
    DamageSet = CreateDefaultSubobject<UFortDamageSet>(TEXT("DamageSet"));
    HealthBarIndicator = NULL;
}

