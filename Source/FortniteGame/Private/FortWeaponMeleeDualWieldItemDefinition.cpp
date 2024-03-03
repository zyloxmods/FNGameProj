#include "FortWeaponMeleeDualWieldItemDefinition.h"

USkeletalMesh* UFortWeaponMeleeDualWieldItemDefinition::GetWeaponMeshOffhandOverride() const {
    return NULL;
}

UFortWeaponMeleeDualWieldItemDefinition::UFortWeaponMeleeDualWieldItemDefinition() {
    this->ManagedVFX_OffhandDefaults = NULL;
    this->AnimTrailsOffhandWidth = 1;
    this->bUseAnimTrailsOffhand = true;
    this->bAttachAnimTrailsOffhandToWeapon = false;
}

