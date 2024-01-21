#include "FortWrapSkeletalMeshActor.h"

void AFortWrapSkeletalMeshActor::SetWrap(UAthenaItemWrapDefinition* NewWrap, EItemWrapMaterialType MaterialType) {
}

AFortWrapSkeletalMeshActor::AFortWrapSkeletalMeshActor() {
    this->WrapToApply = NULL;
    this->WrapMaterialType = EItemWrapMaterialType::WeaponWrap;
    this->bHasSectionLimit = true;
    this->MaterialSectionMask = 1;
}

