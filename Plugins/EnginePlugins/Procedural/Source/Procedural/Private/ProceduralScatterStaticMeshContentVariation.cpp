#include "ProceduralScatterStaticMeshContentVariation.h"

UProceduralScatterStaticMeshContentVariation::UProceduralScatterStaticMeshContentVariation() {
    this->StaticMeshMode = EProceduralScatterStaticMeshMode::FromStaticMesh;
    this->Mesh = NULL;
    this->ActorClass = NULL;
    this->OverrideInstancingSettings = NULL;
}

