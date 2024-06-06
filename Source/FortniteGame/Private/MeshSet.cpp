#include "MeshSet.h"

FMeshSet::FMeshSet() {
    Weight = 1;
    ResourceType = EFortResourceType::Wood;
    bDoNotBlockBuildings = false;
    bDestroyOnPlayerBuildingPlacement = false;
    bNeedsDamageOverlay = false;
    BaseMesh = NULL;
    BreakEffect = NULL;
    DeathParticles = NULL;
    DeathSound = NULL;
    ConstructedEffect = NULL;
    SearchedMesh = NULL;
    LootNoiseRange = 1;
}

