#include "FortPlayerMarkerBase.h"
#include "Components/StaticMeshComponent.h"






AFortPlayerMarkerBase::AFortPlayerMarkerBase() {
    CustomMarkerItemDefinition = NULL;
    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}

