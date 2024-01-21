#include "FortAthenaVehicle.h"
#include "FortDamageSet.h"
#include "FortSkyTubePhysicsComponent.h"
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

void AFortAthenaVehicle::UpdateClientWithVehicleTestInput_Implementation(FVector LinearVelocity, FVector AngularVelocity) {
}

bool AFortAthenaVehicle::ShouldShowSoundIndicator_Implementation() const {
    return false;
}

void AFortAthenaVehicle::SetShootingCone(int32 SeatIdx, FAthenaVehicleShootingCone InCone) {
}

void AFortAthenaVehicle::SetPropDestructionParams(TArray<TSubclassOf<ABuildingActor>> InBuildingPropClassesVehicleCanDestroy, TArray<TSubclassOf<ABuildingActor>> InBuildingPropClassesVehicleCannotDestroyWhenBoosting, TArray<UBuildingEditModeMetadata*> InWallsVehicleCanDestroy, TArray<UBuildingEditModeMetadata*> InWallsVehicleCannotDestroyWhenBoosting) {
}

void AFortAthenaVehicle::SetImpulseResponseZBias(const float ZBias) {
}

void AFortAthenaVehicle::SetImpulseResponseMultiplier(const float Multiplier) {
}

void AFortAthenaVehicle::SetIgnoreNextFallingDamage(bool InIgnoreNextFallingDamage) {
}

void AFortAthenaVehicle::SetIgnoreAllFallingDamage(bool InIgnoreAllFallingDamage) {
}

void AFortAthenaVehicle::SetHealthPercent(float Percent) {
}

void AFortAthenaVehicle::SetDyingPhysics() {
}

void AFortAthenaVehicle::SetCurrentFocusedSocketLocation(const int32 SeatIndex) {
}

void AFortAthenaVehicle::SetActorBase(AActor* InActorBase, const int32 SeatIndex) {
}

void AFortAthenaVehicle::ServerUsingRiftPortal_Implementation(ABuildingGameplayActor* RiftPortal) {
}
bool AFortAthenaVehicle::ServerUsingRiftPortal_Validate(ABuildingGameplayActor* RiftPortal) {
    return true;
}

void AFortAthenaVehicle::ServerStartFire_Implementation(uint8 FireModeNum) {
}
bool AFortAthenaVehicle::ServerStartFire_Validate(uint8 FireModeNum) {
    return true;
}

void AFortAthenaVehicle::ServerSetIgnoreNextFallingDamage_Implementation(bool InIgnoreNextFallingDamage) {
}
bool AFortAthenaVehicle::ServerSetIgnoreNextFallingDamage_Validate(bool InIgnoreNextFallingDamage) {
    return true;
}

void AFortAthenaVehicle::ServerSetIgnoreAllFallingDamage_Implementation(bool InIgnoreAllFallingDamage) {
}
bool AFortAthenaVehicle::ServerSetIgnoreAllFallingDamage_Validate(bool InIgnoreAllFallingDamage) {
    return true;
}

bool AFortAthenaVehicle::ServerOnAttemptInteract(const FInteractionType& InteractType) {
    return false;
}

bool AFortAthenaVehicle::SeatIsTurret(int32 SeatIndex) const {
    return false;
}

void AFortAthenaVehicle::ResetTrick() {
}

bool AFortAthenaVehicle::RearLateralFrictionHasReachedMax() const {
    return false;
}


void AFortAthenaVehicle::OverrideCurrentWrap(const UAthenaItemWrapDefinition* LoadedWrap) {
}





void AFortAthenaVehicle::OnRep_VehicleAttributes() {
}

void AFortAthenaVehicle::OnRep_SurfaceTypeVehicleOn(TEnumAsByte<EPhysicalSurface> PreviousSurfaceOn) {
}

void AFortAthenaVehicle::OnRep_PendingDeath() {
}

void AFortAthenaVehicle::OnRep_IgnoredBuildingActors() {
}

void AFortAthenaVehicle::OnRep_HealthSet() {
}

void AFortAthenaVehicle::OnRep_CorrectTargetOrientation() {
}

void AFortAthenaVehicle::OnRep_AbilitySystemComponent() {
}

void AFortAthenaVehicle::OnPxComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void AFortAthenaVehicle::OnPawnExitVehicle_Implementation(AFortPlayerPawn* PlayerPawn, FName ExitSocketName) {
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

bool AFortAthenaVehicle::IsOutOfFuel() const {
    return false;
}

bool AFortAthenaVehicle::IsMagnetizedForSkyTubes() const {
    return false;
}

bool AFortAthenaVehicle::IsJumping() const {
    return false;
}

bool AFortAthenaVehicle::IsInWater() const {
    return false;
}

bool AFortAthenaVehicle::IsInSkyTube() const {
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





FName AFortAthenaVehicle::GetVehicleExitActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

FName AFortAthenaVehicle::GetVehicleChangeSeatActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

float AFortAthenaVehicle::GetSteeringAngle() const {
    return 0.0f;
}

FVector AFortAthenaVehicle::GetStandingFiringOffsetForSeat(int32 SeatIdx) const {
    return FVector{};
}

float AFortAthenaVehicle::GetSpringLengthRatio(int32 SpringIdx) const {
    return 0.0f;
}

bool AFortAthenaVehicle::GetShootingCone(int32 SeatIdx, FTransform& OutConeTM, FAthenaVehicleShootingCone& OutCone) const {
    return false;
}

UFortVehicleSeatWeaponComponent* AFortAthenaVehicle::GetSeatWeaponComponent(int32 SeatIndex) const {
    return NULL;
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

AFortPlayerPawn* AFortAthenaVehicle::GetPawnAtSeat(int32 SeatIdx) const {
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

FVector AFortAthenaVehicle::GetCrouchingFiringOffsetForSeat(int32 SeatIdx) const {
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

void AFortAthenaVehicle::ChangeSeat() {
}

bool AFortAthenaVehicle::CanTeleport() const {
    return false;
}

bool AFortAthenaVehicle::CanShootFromSeat(int32 SeatIndex) const {
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

void AFortAthenaVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaVehicle, bHasDriver);
    DOREPLIFETIME(AFortAthenaVehicle, EmptyDriverInputState);
    DOREPLIFETIME(AFortAthenaVehicle, VehicleAttributes);
    DOREPLIFETIME(AFortAthenaVehicle, IgnoredBuildingActors);
    DOREPLIFETIME(AFortAthenaVehicle, CorrectTargetOrientation);
    DOREPLIFETIME(AFortAthenaVehicle, AbilitySystemComponent);
    DOREPLIFETIME(AFortAthenaVehicle, HealthSet);
    DOREPLIFETIME(AFortAthenaVehicle, bPendingDeath);
    DOREPLIFETIME(AFortAthenaVehicle, SurfaceTypeVehicleOn);
}

AFortAthenaVehicle::AFortAthenaVehicle() {
    this->PrimarySurfaceType = SurfaceType_Default;
    this->WeaponResponseType = EFortBaseWeaponDamage::Combat;
    this->SeatSwitchCooldown = 0.00f;
    this->bShowDamageNumbers = true;
    this->bPlayDamageAudio = false;
    this->bShowVehicleHealthBarOnPlayerHUD = true;
    this->bDestroyBuildingSMActorOnForceExit = true;
    this->ForwardDrivingAntiGravityScaler = 1.00f;
    this->CameraSpaceForwardDistanceOffset = 0.00f;
    this->CameraAssistStrength = 0.50f;
    this->TimeToAutoCamera = 1.00f;
    this->CameraAssistBaseHeight = 6.00f;
    this->CameraAssistUpHillScaler = 20.00f;
    this->CameraAssistSteerScaler = 6.00f;
    this->CameraAssistForwardScale = 20.00f;
    this->MinSpeedForAutoCamera = 10.00f;
    this->CameraFOVOffset = 0.00f;
    this->bIgnoreAllFallingDamage = false;
    this->bIgnoreNextFallingDamage = false;
    this->VehicleMinHorSpeedToDamage = 30.00f;
    this->VehicleMaxHorSpeedToDamage = 50.00f;
    this->VehicleMinHorSpeedDamage = 30.00f;
    this->VehicleMaxHorSpeedDamage = 50.00f;
    this->ImpulseResponseMultiplier = 1.00f;
    this->ImpulseResponseZBias = 0.10f;
    this->bIsBraking = false;
    this->BrakeAboveTopSpeedDelta = 3.00f;
    this->ChangeDirBrakeDelta = 3.00f;
    this->TimeToIdleBrake = 0.20f;
    this->DragCoefficient = 5.00f;
    this->MaxRearLateralFriction = 0.00f;
    this->MaxFrontLateralFriction = 0.00f;
    this->CameraPitchConstraint = 180.00f;
    this->CameraYawConstraint = 180.00f;
    this->TrickSet = NULL;
    this->CachedSpeed = 0.00f;
    this->DefaultHitNotifyAudioBank = NULL;
    this->GEDamagePassengersOnDeath = NULL;
    this->LifespanAfterDeath = 0.50f;
    this->bPlayedDying = false;
    this->LastDamagedTime = 0.00f;
    this->PlayerCollisionGameplayEffect = NULL;
    this->OverlapComponent = NULL;
    this->AimAssistShapeComponent = NULL;
    this->bHasDriver = false;
    this->VehicleMovementSet = NULL;
    this->bHasAnyMountedWeaponSeats = false;
    this->CameraModeClass = NULL;
    this->DrivingAnimClass = NULL;
    this->AbilitySystemComponent = NULL;
    this->HealthSet = NULL;
    this->ImpulseResponseSet = NULL;
    this->DamageSet = CreateDefaultSubobject<UFortDamageSet>(TEXT("DamageSet"));
    this->HealthBarIndicator = NULL;
    this->MostRecentCosmeticSourcePawn = NULL;
    this->ActiveCosmeticItem = NULL;
    this->PawnAssociatedWithWrap = NULL;
    this->ActiveCosmeticWrap = NULL;
    this->bPendingDeath = false;
    this->bCanPassengerPawnsTakeDamage = true;
    this->ItemWrapModifier = NULL;
    this->SurfaceTypeVehicleOn = SurfaceType_Default;
    this->StartupAbilitySet = NULL;
    this->bDestroyOnLastExit = false;
    this->IndicatorEnabled = true;
    this->IndicatorAudibleDistance = 20000.00f;
    this->IndicatorIcon = NULL;
    this->VehicleSeatComponent = CreateDefaultSubobject<UFortVehicleSeatComponent>(TEXT("VehicleSeatComponent"));
    this->SkyTubePhysicsComponent = CreateDefaultSubobject<UFortSkyTubePhysicsComponent>(TEXT("SkyTubePhysicsComponent"));
}

