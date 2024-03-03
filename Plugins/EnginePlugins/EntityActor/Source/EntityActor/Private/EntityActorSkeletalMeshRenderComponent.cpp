#include "EntityActorSkeletalMeshRenderComponent.h"

UEntityActorSkeletalMeshRenderComponent::UEntityActorSkeletalMeshRenderComponent() {
    this->ShadowVar_SkeletalMesh = NULL;
    this->ShadowVar_EnableCollision = ECollisionEnabled::QueryAndPhysics;
}

