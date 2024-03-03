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
    this->OverrideItemWrap = NULL;
    this->BoundsXYSplineComponent = NULL;
    this->IndicatorEnabled = true;
    this->bDestroyOnLastExit = false;
    this->bShowDamageNumbers = true;
    this->bShowDamageNumbersAtImpactLocation = false;
    this->bPlayDamageAudio = false;
    this->bShowVehicleHealthBarOnPlayerHUD = true;
    this->bDestroyBuildingSMActorOnForceExit = true;
    this->bIgnoreAllFallingDamage = false;
    this->bIgnoreNextFallingDamage = false;
    this->bIsBraking = false;
    this->bPlayedDying = false;
    this->bPendingDeath = false;
    this->bHasDriver = false;
    this->bAllowInteractBetweenFortVolumes = true;
    this->bCanPassengerPawnsTakeDamage = true;
    this->bOnFire = false;
    this->bLeakingFuel = false;
    this->bEnableCurieMaterial = false;
    this->bWaitingForSleep = false;
    this->bAllowInteractBetweenFortVolumes_Runtime = true;
    this->bTricksEnabled = true;
    this->FireDamageTickTimer = 1;
    this->CurrentFOV = 1;
    this->DriverReticleBrush = NULL;
    this->IndicatorAudibleDistance = 1;
    this->IndicatorIcon = NULL;
    this->WaterEffectsVehicleMaxSpeedKmh = 1;
    this->WaterEffectsAsset = NULL;
    this->WaterEffectsComponent = NULL;
    this->LastPropImpactImpulseTime = 1;
    this->PrimarySurfaceType = SurfaceType_Default;
    this->WeaponResponseType = EFortBaseWeaponDamage::Combat;
    this->VTDMode = 0;
    this->SurfaceTypeVehicleOn = SurfaceType_Default;
    this->ForcedMaterialVariantIndex = 0;
    this->SeatSwitchCooldown = 1;
    this->ForwardDrivingAntiGravityScaler = 1;
    this->CameraSpaceForwardDistanceOffset = 1;
    this->CameraAssistStrength = 1;
    this->CameraAssistRampUp = 1;
    this->TimeToAutoCamera = 1;
    this->CameraAssistBaseHeight = 1;
    this->CameraAssistUpHillScaler = 1;
    this->CameraAssistSteerScaler = 1;
    this->CameraAssistForwardScale = 1;
    this->MinSpeedForAutoCamera = 1;
    this->AngleDegreesThresholdFromCurrentCameraToTarget = 1;
    this->CameraFOVOffset = 1;
    this->TetheredCamera = NULL;
    this->PlayerCollisionGameplayEffect = NULL;
    this->OverlapComponent = NULL;
    this->WaterOverlapComponent = NULL;
    this->VehicleMinHorSpeedToDamage = 1;
    this->VehicleMaxHorSpeedToDamage = 1;
    this->VehicleMinHorSpeedDamage = 1;
    this->VehicleMaxHorSpeedDamage = 1;
    this->ImpulseResponseMultiplier = 1;
    this->ImpulseResponseZBias = 1;
    this->BrakeAboveTopSpeedDelta = 1;
    this->ChangeDirBrakeDelta = 1;
    this->TimeToIdleBrake = 1;
    this->DragCoefficient = 1;
    this->MaxRearLateralFriction = 1;
    this->MaxFrontLateralFriction = 1;
    this->PrimaryCameraPitchConstraint = 1;
    this->PrimaryCameraYawConstraint = 1;
    this->CachedSpeed = 1;
    this->TrickSet = NULL;
    this->WaterBodyOverlapComponent = NULL;
    this->DefaultHitNotifyAudioBank = NULL;
    this->BulletCollisionComponentTag = TEXT("BulletCollision");
    this->GEDamagePassengersOnDeath = NULL;
    this->LifespanAfterDeath = 1;
    this->LastDamagedTime = 1;
    this->EmoteAudioSourcePresetChain = NULL;
    this->EmoteAudioAttenuation = NULL;
    this->StartupAbilitySet = NULL;
    this->VehicleSeatComponent = CreateDefaultSubobject<UFortVehicleSeatComponent>(TEXT("VehicleSeatComponent"));
    this->SkyTubePhysicsComponent = NULL;
    this->PontoonsComponent = NULL;
    this->VehicleMovementSet = NULL;
    this->ImminentCollisionComponent = NULL;
    this->CameraModeClass = NULL;
    this->DrivingAnimClass = NULL;
    this->DriverAnimLayerOverlayClass = NULL;
    this->PassengerAnimLayerOverlayClass = NULL;
    this->AnimSet = NULL;
    this->AbilitySystemComponent = NULL;
    this->HealthSet = NULL;
    this->ImpulseResponseSet = NULL;
    this->DamageSet = CreateDefaultSubobject<UFortDamageSet>(TEXT("DamageSet"));
    this->HealthBarIndicator = NULL;
}

