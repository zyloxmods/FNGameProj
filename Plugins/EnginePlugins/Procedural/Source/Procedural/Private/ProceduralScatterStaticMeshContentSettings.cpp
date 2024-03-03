#include "ProceduralScatterStaticMeshContentSettings.h"
#include "FoliageInstancedStaticMeshComponent.h"
#include "HISMBuilderSettings.h"

UProceduralScatterStaticMeshContentSettings::UProceduralScatterStaticMeshContentSettings() {
    this->ComponentClass = UFoliageInstancedStaticMeshComponent::StaticClass();
    this->VariationsInstancingSettings = CreateDefaultSubobject<UHISMBuilderSettings>(TEXT("DefaultMeshInstancingSettings"));
}

