#include "FortHeldObjectComponent.h"
#include "Net/UnrealNetwork.h"

void UFortHeldObjectComponent::TurnOnCollisionSettings() {
}

void UFortHeldObjectComponent::TurnOffCollisionSettings() {
}

void UFortHeldObjectComponent::ThrownObjectStopped(const FHitResult& ImpactResult) {
}

void UFortHeldObjectComponent::ThrowHeldObject(const FVector& DetachLocation, const FRotator& ThrowDirection) {
}

void UFortHeldObjectComponent::SetMeshComponent(UMeshComponent* InMeshComponent) {
}

void UFortHeldObjectComponent::PlaceHeldObject() {
}

void UFortHeldObjectComponent::PickupHeldObject(AFortPlayerPawn* PlayerPawn) {
}

void UFortHeldObjectComponent::OnWeaponUnequipped() {
}

void UFortHeldObjectComponent::OnThrowComplete() {
}

void UFortHeldObjectComponent::OnRep_UsePreviewMaterial() {
}

void UFortHeldObjectComponent::OnRep_OwningPawn(AFortPlayerPawn* LastOwningPawn) {
}

void UFortHeldObjectComponent::OnRep_bCollisionBlockedByPawns() {
}

bool UFortHeldObjectComponent::IsUnheld() const {
    return false;
}

bool UFortHeldObjectComponent::IsThrown() const {
    return false;
}

bool UFortHeldObjectComponent::IsPlaced() const {
    return false;
}

bool UFortHeldObjectComponent::IsHeld() const {
    return false;
}

bool UFortHeldObjectComponent::IsDropped() const {
    return false;
}

void UFortHeldObjectComponent::HandleOwnerDestroyed(AActor* DestroyedActor) {
}

void UFortHeldObjectComponent::HandleOwnerAsBuildingActorDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

float UFortHeldObjectComponent::GetSweptTraceRadius() const {
    return 0.0f;
}

UMeshComponent* UFortHeldObjectComponent::GetMeshComponent() const {
    return NULL;
}

float UFortHeldObjectComponent::GetMaxSpeed() const {
    return 0.0f;
}

AFortPlayerPawn* UFortHeldObjectComponent::GetInstigator() const {
    return NULL;
}

float UFortHeldObjectComponent::GetGravityZ() const {
    return 0.0f;
}

float UFortHeldObjectComponent::GetGravityScale() const {
    return 0.0f;
}

bool UFortHeldObjectComponent::GetBlocksVehicleDriverSeat() const {
    return false;
}

void UFortHeldObjectComponent::DropHeldObject() {
}

bool UFortHeldObjectComponent::CanInteract(const AFortPlayerPawn* RequestingPawn) {
    return false;
}

void UFortHeldObjectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortHeldObjectComponent, bUsePreviewMaterial);
    DOREPLIFETIME(UFortHeldObjectComponent, bCollisionBlockedByPawns);
    DOREPLIFETIME(UFortHeldObjectComponent, HeldObjectState);
    DOREPLIFETIME(UFortHeldObjectComponent, OwningPawn);
    DOREPLIFETIME(UFortHeldObjectComponent, ObjectPickupRotation);
}

UFortHeldObjectComponent::UFortHeldObjectComponent() {
    PlayerAttachmentScaleRule = EAttachmentRule::KeepRelative;
    bBlocksVehicleDriverSeat = true;
    bApplyAngularImpulseOnThrow = false;
    PlacementPreviewClass = NULL;
    bUsePreviewMaterial = false;
    bCollisionBlockedByPawns = false;
    bDroppedFromWeaponSwap = false;
    HeldObjectState = EHeldObjectState::Unheld;
    OwningPawn = NULL;
    ProjectileMovementComponent = NULL;
    PhysicsObjectComponent = NULL;
    ReferenceMeshComponent = NULL;
    PlacementPreviewActor = NULL;
}

