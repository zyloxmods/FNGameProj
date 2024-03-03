#include "FortWrapSkeletalMeshActor.h"

void AFortWrapSkeletalMeshActor::SetWrap(UAthenaItemWrapDefinition* NewWrap, EItemWrapMaterialType MaterialType) {
}

ACustomItemWrapModifier* AFortWrapSkeletalMeshActor::GetWrapModifier() const {
    return NULL;
}

AFortWrapSkeletalMeshActor::AFortWrapSkeletalMeshActor() {
    this->WrapToApply = NULL;
    this->WrapMaterialType = EItemWrapMaterialType::WeaponWrap;
    this->ItemWrapModifier = NULL;
    this->bHasSectionLimit = true;
    this->MaterialSectionMask = 0;
}

