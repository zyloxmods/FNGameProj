#include "FortPickupsParent.h"

void AFortPickupsParent::SetupStretchMIDsInternal() {
}

AFortPickupsParent::AFortPickupsParent() {
    DefaultBaseMaterial = NULL;
    LootGiftMaterialSkelMesh = NULL;
    LootGiftMaterialStaticMesh = NULL;
    bIsBluGloPickup = false;
    bIsSkeletalMeshComponent = false;
    bHasUniqueMaterialIds = false;
    bActivateRarityParticleSystems = true;
    bIsLootGiftForOthers = false;
    CurrentViewDistance = 1;
    PickupRarityLevel = 0;
    CullDistanceStW = 1;
    CullDistanceAthena = 1;
    CullDistanceBacchus = 1;
    BackgroundParticleSystemComponentCullDistance = 1;
    SkelMeshComponent = NULL;
    StaticMeshComponent = NULL;
    MeshPrimitiveComponent = NULL;
    BackgroundParticleSystemComponent = NULL;
}

