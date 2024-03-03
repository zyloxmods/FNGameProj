#include "FortCosmeticDisplayActor.h"
#include "Components/ChildActorComponent.h"
#include "Components/SkeletalMeshComponent.h"



AFortCosmeticDisplayActor::AFortCosmeticDisplayActor() {
    this->CustomizationCosmeticDefinition = NULL;
    this->PreviewActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PreviewActor"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->bApplyLightingOverrideToChildren = false;
}

