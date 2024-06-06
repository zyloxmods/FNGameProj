#include "FortCosmeticDisplayActor.h"
#include "Components/ChildActorComponent.h"
#include "Components/SkeletalMeshComponent.h"



AFortCosmeticDisplayActor::AFortCosmeticDisplayActor() {
    CustomizationCosmeticDefinition = NULL;
    PreviewActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PreviewActor"));
    SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    bApplyLightingOverrideToChildren = false;
}

