#include "FortWeap_BuildingToolBase.h"
#include "Components/StaticMeshComponent.h"

AFortWeap_BuildingToolBase::AFortWeap_BuildingToolBase() {
    this->PencilMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PencilMeshComponent0"));
    this->InstigatorController = NULL;
}

