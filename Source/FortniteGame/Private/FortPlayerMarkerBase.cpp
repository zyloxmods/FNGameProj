#include "FortPlayerMarkerBase.h"
#include "Components/StaticMeshComponent.h"






AFortPlayerMarkerBase::AFortPlayerMarkerBase() {
    this->CustomMarkerItemDefinition = NULL;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}

