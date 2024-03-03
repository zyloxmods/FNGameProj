#include "FortOctopusVehicle.h"
#include "Net/UnrealNetwork.h"


void AFortOctopusVehicle::SetTowhookProjectile(AFortOctopusTowhookAttachableProjectile* ProjectileActor) {
}

void AFortOctopusVehicle::SetTowhookAttachState(UPrimitiveComponent* Component, const FVector& WorldLocation, const FVector& WorldNormal) {
}

void AFortOctopusVehicle::ServerUpdateTowhook_Implementation(FVector_NetQuantizeNormal InNetTowhookAimDir) {
}
bool AFortOctopusVehicle::ServerUpdateTowhook_Validate(FVector_NetQuantizeNormal InNetTowhookAimDir) {
    return true;
}

void AFortOctopusVehicle::ServerSetTowhookAttachState_Implementation(FNetTowhookAttachState InTowhookAttachState) {
}
bool AFortOctopusVehicle::ServerSetTowhookAttachState_Validate(FNetTowhookAttachState InTowhookAttachState) {
    return true;
}

void AFortOctopusVehicle::ServerBreakTowhook_Implementation() {
}
bool AFortOctopusVehicle::ServerBreakTowhook_Validate() {
    return true;
}


void AFortOctopusVehicle::OnTowhookYankedInternal(const FVector& YankForce, UPrimitiveComponent* YankedComponent) {
}

void AFortOctopusVehicle::OnRep_ReplicatedAttachState() {
}

void AFortOctopusVehicle::OnRep_NetTowhookAimDir() {
}




void AFortOctopusVehicle::OnBoostBounceInternal(const FVector& Location, const FVector& Normal, const float Force, UPrimitiveComponent* HitComponent) {
}



bool AFortOctopusVehicle::IsTowhookInAirExtending() const {
    return false;
}

bool AFortOctopusVehicle::IsTowhookHolstered() const {
    return false;
}

bool AFortOctopusVehicle::IsTowhookExtending() const {
    return false;
}

bool AFortOctopusVehicle::IsTowhookContracting() const {
    return false;
}

bool AFortOctopusVehicle::IsTowhookAttached() const {
    return false;
}

bool AFortOctopusVehicle::IsBoosting() const {
    return false;
}

FRotator AFortOctopusVehicle::GetTowhookRotation(const bool bInterp) const {
    return FRotator{};
}

FVector AFortOctopusVehicle::GetTowhookPosition() const {
    return FVector{};
}

FVector AFortOctopusVehicle::GetTowhookMuzzlePositionInterp() const {
    return FVector{};
}

FVector AFortOctopusVehicle::GetTowhookMuzzlePosition() const {
    return FVector{};
}

void AFortOctopusVehicle::GetTowhookCableEndpoints(FVector& OutCableStart, FVector& OutCableEnd) const {
}

FVector AFortOctopusVehicle::GetTowhookCableAttachLocation() const {
    return FVector{};
}

UPrimitiveComponent* AFortOctopusVehicle::GetTowhookAttachedComponent() const {
    return NULL;
}

FVector AFortOctopusVehicle::GetTargetHeading() const {
    return FVector{};
}

FRotator AFortOctopusVehicle::GetShellRotation() const {
    return FRotator{};
}

FVector AFortOctopusVehicle::GetSeatUpDir() const {
    return FVector{};
}

float AFortOctopusVehicle::GetSeatSteerStrength() const {
    return 0.0f;
}

void AFortOctopusVehicle::GetSeatSteerDeltas(float& SeatSteerYawDelta, float& SeatSteerPitchDelta, float& SeatSteerRollDelta) {
}

FVector AFortOctopusVehicle::GetSeatRotationVelocity() const {
    return FVector{};
}

FVector AFortOctopusVehicle::GetSeatRotationTorque() const {
    return FVector{};
}

FRotator AFortOctopusVehicle::GetSeatRotation() const {
    return FRotator{};
}

FVector AFortOctopusVehicle::GetSeatForwardDir() const {
    return FVector{};
}

void AFortOctopusVehicle::GetPrimaryContact(bool& bIstouching, FVector& ContactPoint, FVector& ContactNormal) const {
}

bool AFortOctopusVehicle::GetIsExtendToggled() {
    return false;
}

float AFortOctopusVehicle::GetAccelerationPercent() const {
    return 0.0f;
}

void AFortOctopusVehicle::DestroyTowhookProjectile() {
}

void AFortOctopusVehicle::CacheParticleFX(UParticleSystemComponent* InCoilTopR, UParticleSystemComponent* InCoilTopL, UParticleSystemComponent* InCoilBottomR, UParticleSystemComponent* InCoilBottomL, UParticleSystemComponent* InBoost, UParticleSystemComponent* InDust) {
}

void AFortOctopusVehicle::CacheAudioPointers(UFortVehicleAudioVoice* InAudioMovement, UFortVehicleAudioVoice* InAudioWind, UFortVehicleAudioVoice* InAudioTowCable) {
}

void AFortOctopusVehicle::BreakTowhook() {
}

bool AFortOctopusVehicle::AimTraceHitsTarget() const {
    return false;
}

void AFortOctopusVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortOctopusVehicle, ReplicatedAttachState);
    DOREPLIFETIME(AFortOctopusVehicle, NetTowhookAimDir);
}

AFortOctopusVehicle::AFortOctopusVehicle() {
    this->CacheDriverCameraShake = NULL;
    this->BounceContactRepulsionForce = 1;
    this->BoostForce = 1;
    this->MaxVerticalBoostForce = 1;
    this->BoostSpeedKmh = 1;
    this->TowhookSpringDeformationRateOnGround = 1;
    this->bAutoRetractGrapple = false;
    this->bCanHoldGrapple = false;
    this->TowhookInterpSpeed = 1;
    this->TowhookInterpMaxPercentPerSecond = 1;
    this->TowhookMaxInvalidateTargetAngleDeg = 1;
    this->TowhookMaxInvalidateTargetDot = 1;
    this->InternalBlockerCollisionName = TEXT("InternalBlocker");
    this->FortOctopusVehicleConfigsClass = NULL;
    this->ProjectileTraceChannel = ECC_WorldStatic;
    this->ProjectileSpeedKmh = 1;
    this->FortOctopusVehicleConfigs = NULL;
    this->CacheCoilIdleTopR = NULL;
    this->CacheCoilIdleTopL = NULL;
    this->CacheCoilIdleBottomR = NULL;
    this->CacheCoilIdleBottomL = NULL;
    this->CacheBoostFX = NULL;
    this->CacheDustFX = NULL;
    this->CacheAudioMovement = NULL;
    this->CacheAudioWind = NULL;
    this->CacheAudioTowCable = NULL;
}

