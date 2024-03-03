#include "FortPickupsParent.h"

void AFortPickupsParent::SetupStretchMIDsInternal() {
}

AFortPickupsParent::AFortPickupsParent() {
    this->DefaultBaseMaterial = NULL;
    this->LootGiftMaterialSkelMesh = NULL;
    this->LootGiftMaterialStaticMesh = NULL;
    this->bIsBluGloPickup = false;
    this->bIsSkeletalMeshComponent = false;
    this->bHasUniqueMaterialIds = false;
    this->bActivateRarityParticleSystems = true;
    this->bIsLootGiftForOthers = false;
    this->CurrentViewDistance = 1;
    this->PickupRarityLevel = 0;
    this->CullDistanceStW = 1;
    this->CullDistanceAthena = 1;
    this->CullDistanceBacchus = 1;
    this->BackgroundParticleSystemComponentCullDistance = 1;
    this->SkelMeshComponent = NULL;
    this->StaticMeshComponent = NULL;
    this->MeshPrimitiveComponent = NULL;
    this->BackgroundParticleSystemComponent = NULL;
}

