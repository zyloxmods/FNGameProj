#include "FortDecoPreview_GenericTrap.h"
#include "Components/StaticMeshComponent.h"

AFortDecoPreview_GenericTrap::AFortDecoPreview_GenericTrap() {
    this->TrapRangeMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TrapRangeMeshComp0"));
}

