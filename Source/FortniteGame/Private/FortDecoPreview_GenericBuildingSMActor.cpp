#include "FortDecoPreview_GenericBuildingSMActor.h"
#include "Components/StaticMeshComponent.h"

AFortDecoPreview_GenericBuildingSMActor::AFortDecoPreview_GenericBuildingSMActor() {
    this->PrimaryMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PrimaryMeshComp0"));
}

