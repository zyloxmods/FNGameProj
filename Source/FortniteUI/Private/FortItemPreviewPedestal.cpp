#include "FortItemPreviewPedestal.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

void AFortItemPreviewPedestal::PreviewItemBP(UFortItem* Item) {
}

void AFortItemPreviewPedestal::ClearDisplay() {
}

AFortItemPreviewPedestal::AFortItemPreviewPedestal() {
    this->TemporaryHeroInstance = NULL;
    this->WeaponPlacementComponent = CreateDefaultSubobject<USceneComponent>(TEXT("WeaponPlacementHelper"));
    this->PreviewActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PreviewActor"));
    this->PreviewStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PreviewStaticMesh"));
    this->PreviewSkelMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PreviewSkeletalMesh"));
}

