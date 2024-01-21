#include "FortAttachableProjectileBase.h"
#include "Net/UnrealNetwork.h"

void AFortAttachableProjectileBase::ServerAttachToActor(const FHitResult& Hit, AActor* AttachToActor, float StickyOffsetFromPhysicsMesh, float StickyOffsetFromBoneCenter, float NarrowPlacementAgainstVelocityThreshold) {
}

void AFortAttachableProjectileBase::OnRep_ReplicatedAttachedInfo() {
}




AActor* AFortAttachableProjectileBase::GetAttachedToActor() {
    return NULL;
}

void AFortAttachableProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAttachableProjectileBase, AttachedInfo);
}

AFortAttachableProjectileBase::AFortAttachableProjectileBase() {
}

