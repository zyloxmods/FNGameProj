#include "FortDecoPreview_GenericTrapSkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"

AFortDecoPreview_GenericTrapSkeletalMesh::AFortDecoPreview_GenericTrapSkeletalMesh() {
    SkelMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkelMeshComp0"));
}

