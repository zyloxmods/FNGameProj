#include "FortWrapSkeletalMeshActor.h"

void AFortWrapSkeletalMeshActor::SetWrap(UAthenaItemWrapDefinition* NewWrap, EItemWrapMaterialType MaterialType) {
}

ACustomItemWrapModifier* AFortWrapSkeletalMeshActor::GetWrapModifier() const {
    return NULL;
}

AFortWrapSkeletalMeshActor::AFortWrapSkeletalMeshActor() {
    WrapToApply = NULL;
    WrapMaterialType = EItemWrapMaterialType::WeaponWrap;
    ItemWrapModifier = NULL;
    bHasSectionLimit = true;
    MaterialSectionMask = 0;
}

