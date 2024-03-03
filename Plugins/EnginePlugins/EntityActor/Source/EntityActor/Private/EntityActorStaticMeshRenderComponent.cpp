#include "EntityActorStaticMeshRenderComponent.h"

UEntityActorStaticMeshRenderComponent::UEntityActorStaticMeshRenderComponent() {
    this->ShadowVar_StaticMesh = NULL;
    this->ShadowVar_EnableCollision = ECollisionEnabled::QueryAndPhysics;
    this->TargetMeshIndex = 0;
    this->ShadowVar_Visible = true;
    this->ShadowVar_MaxDrawDistance = 1;
}

