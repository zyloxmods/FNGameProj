#include "FortSpaghettiVehicle.h"
#include "Net/UnrealNetwork.h"


void AFortSpaghettiVehicle::SetTowhookProjectile(AFortSpaghettiTowhookAttachableProjectile* ProjectileActor) {
}

void AFortSpaghettiVehicle::SetTowhookAttachState(UPrimitiveComponent* Component, const FVector& WorldLocation, const FVector& WorldNormal) {
}

void AFortSpaghettiVehicle::ServerUpdateTowhook_Implementation(FVector_NetQuantizeNormal InNetTowhookAimDir) {
}
bool AFortSpaghettiVehicle::ServerUpdateTowhook_Validate(FVector_NetQuantizeNormal InNetTowhookAimDir) {
    return true;
}

void AFortSpaghettiVehicle::ServerSetTowhookAttachState_Implementation(FNetTowhookAttachState InTowhookAttachState) {
}
bool AFortSpaghettiVehicle::ServerSetTowhookAttachState_Validate(FNetTowhookAttachState InTowhookAttachState) {
    return true;
}


void AFortSpaghettiVehicle::OnTowhookYankedInternal(const FVector& YankForce, UPrimitiveComponent* YankedComponent) {
}

void AFortSpaghettiVehicle::OnRep_ReplicatedAttachState() {
}

void AFortSpaghettiVehicle::OnRep_NetTowhookAimDir() {
}




void AFortSpaghettiVehicle::OnBoostBounceInternal(const FVector& Location, const FVector& Normal, const float Force, UPrimitiveComponent* HitComponent) {
}



bool AFortSpaghettiVehicle::IsTowhookInAirExtending() const {
    return false;
}

bool AFortSpaghettiVehicle::IsTowhookHolstered() const {
    return false;
}

bool AFortSpaghettiVehicle::IsTowhookExtending() const {
    return false;
}

bool AFortSpaghettiVehicle::IsTowhookContracting() const {
    return false;
}

bool AFortSpaghettiVehicle::IsTowhookAttached() const {
    return false;
}

bool AFortSpaghettiVehicle::IsBoosting() const {
    return false;
}

FRotator AFortSpaghettiVehicle::GetTowhookRotation(const bool bInterp) const {
    return FRotator{};
}

FVector AFortSpaghettiVehicle::GetTowhookPosition() const {
    return FVector{};
}

FVector AFortSpaghettiVehicle::GetTowhookMuzzlePositionInterp() const {
    return FVector{};
}

FVector AFortSpaghettiVehicle::GetTowhookMuzzlePosition() const {
    return FVector{};
}

void AFortSpaghettiVehicle::GetTowhookCableEndpoints(FVector& OutCableStart, FVector& OutCableEnd) const {
}

FVector AFortSpaghettiVehicle::GetTowhookCableAttachLocation() const {
    return FVector{};
}

UPrimitiveComponent* AFortSpaghettiVehicle::GetTowhookAttachedComponent() const {
    return NULL;
}

FVector AFortSpaghettiVehicle::GetTargetHeading() const {
    return FVector{};
}

FRotator AFortSpaghettiVehicle::GetShellRotation() const {
    return FRotator{};
}

FVector AFortSpaghettiVehicle::GetSeatUpDir() const {
    return FVector{};
}

float AFortSpaghettiVehicle::GetSeatSteerStrength() const {
    return 0.0f;
}

void AFortSpaghettiVehicle::GetSeatSteerDeltas(float& SeatSteerYawDelta, float& SeatSteerPitchDelta, float& SeatSteerRollDelta) {
}

FVector AFortSpaghettiVehicle::GetSeatRotationVelocity() const {
    return FVector{};
}

FVector AFortSpaghettiVehicle::GetSeatRotationTorque() const {
    return FVector{};
}

FRotator AFortSpaghettiVehicle::GetSeatRotation() const {
    return FRotator{};
}

FVector AFortSpaghettiVehicle::GetSeatForwardDir() const {
    return FVector{};
}

void AFortSpaghettiVehicle::GetPrimaryContact(bool& bIstouching, FVector& ContactPoint, FVector& ContactNormal) const {
}

bool AFortSpaghettiVehicle::GetIsExtendToggled() {
    return false;
}

float AFortSpaghettiVehicle::GetAccelerationPercent() const {
    return 0.0f;
}

void AFortSpaghettiVehicle::CacheParticleFX(UParticleSystemComponent* InCoilTopR, UParticleSystemComponent* InCoilTopL, UParticleSystemComponent* InCoilBottomR, UParticleSystemComponent* InCoilBottomL, UParticleSystemComponent* InBoost, UParticleSystemComponent* InDust) {
}

void AFortSpaghettiVehicle::CacheAudioPointers(UFortVehicleAudioVoice* InAudioMovement, UFortVehicleAudioVoice* InAudioWind, UFortVehicleAudioVoice* InAudioTowCable) {
}

void AFortSpaghettiVehicle::BreakTowhook() {
}

bool AFortSpaghettiVehicle::AimTraceHitsTarget() const {
    return false;
}

void AFortSpaghettiVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortSpaghettiVehicle, ReplicatedAttachState);
    DOREPLIFETIME(AFortSpaghettiVehicle, NetTowhookAimDir);
}

AFortSpaghettiVehicle::AFortSpaghettiVehicle() {
    CacheDriverCameraShake = NULL;
    BounceContactRepulsionForce = 1;
    BoostForce = 1;
    MaxVerticalBoostForce = 1;
    BoostSpeedKmh = 1;
    TowhookSpringDeformationRateOnGround = 1;
    bAutoRetractGrapple = false;
    bCanHoldGrapple = false;
    TowhookInterpSpeed = 1;
    TowhookInterpMaxPercentPerSecond = 1;
    TowhookMaxInvalidateTargetAngleDeg = 1;
    TowhookMaxInvalidateTargetDot = 1;
    InternalBlockerCollisionName = TEXT("InternalBlocker");
    FortSpaghettiVehicleConfigsClass = NULL;
    ProjectileTraceChannel = ECC_WorldStatic;
    ProjectileSpeedKmh = 1;
    FortSpaghettiVehicleConfigs = NULL;
    CacheCoilIdleTopR = NULL;
    CacheCoilIdleTopL = NULL;
    CacheCoilIdleBottomR = NULL;
    CacheCoilIdleBottomL = NULL;
    CacheBoostFX = NULL;
    CacheDustFX = NULL;
    CacheAudioMovement = NULL;
    CacheAudioWind = NULL;
    CacheAudioTowCable = NULL;
}

