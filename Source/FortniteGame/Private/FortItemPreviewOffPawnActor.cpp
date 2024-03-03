#include "FortItemPreviewOffPawnActor.h"
#include "Components/ChildActorComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

TSoftObjectPtr<UTexture2D> AFortItemPreviewOffPawnActor::GetPreviewIcon() const {
    return NULL;
}

AFortItemPreviewOffPawnActor::AFortItemPreviewOffPawnActor() {
    this->PreviewActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PreviewActor"));
    this->PreviewStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PreviewStaticMesh"));
    this->PreviewSkelMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PreviewSkeletalMesh"));
    this->bUseItemDefConfiguredLocation = true;
}

