#include "FortItemPreviewOffPawnActor.h"
#include "Components/ChildActorComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

TSoftObjectPtr<UTexture2D> AFortItemPreviewOffPawnActor::GetPreviewIcon() const {
    return NULL;
}

AFortItemPreviewOffPawnActor::AFortItemPreviewOffPawnActor() {
    PreviewActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PreviewActor"));
    PreviewStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PreviewStaticMesh"));
    PreviewSkelMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PreviewSkeletalMesh"));
    bUseItemDefConfiguredLocation = true;
}

