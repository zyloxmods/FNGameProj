#include "FortDecoPreview_GenericTrap.h"
#include "Components/StaticMeshComponent.h"

AFortDecoPreview_GenericTrap::AFortDecoPreview_GenericTrap() {
    TrapRangeMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TrapRangeMeshComp0"));
}

