#include "FortDecoPreview_GenericBuildingSMActor.h"
#include "Components/StaticMeshComponent.h"

AFortDecoPreview_GenericBuildingSMActor::AFortDecoPreview_GenericBuildingSMActor() {
    PrimaryMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PrimaryMeshComp0"));
}

