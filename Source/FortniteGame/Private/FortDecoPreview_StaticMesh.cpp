#include "FortDecoPreview_StaticMesh.h"
#include "Components/StaticMeshComponent.h"

AFortDecoPreview_StaticMesh::AFortDecoPreview_StaticMesh() {
    PrimaryMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PrimaryMeshComp0"));
}

