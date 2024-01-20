#include "FortPickupEffect.h"







UMaterialInstanceDynamic* AFortPickupEffect::ApplyCosmeticOverridesToMaterial(UMeshComponent* MeshComponent, int32 MatIndex) {
    return NULL;
}

AFortPickupEffect::AFortPickupEffect() {
    this->StaticMesh = NULL;
    this->SkeletalMesh = NULL;
    this->ItemDefinition = NULL;
    this->bDoNotShowSpawnParticles = false;
    this->bDoNotTickSkeletalMeshComponents = true;
    this->bOwnedByALocalPlayer = false;
    this->bOwnedByPlayer = false;
    this->bRandomRotation = false;
}

