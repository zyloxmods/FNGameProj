#include "FortWeaponMeleeDualWieldItemDefinition.h"

USkeletalMesh* UFortWeaponMeleeDualWieldItemDefinition::GetWeaponMeshOffhandOverride() const {
    return NULL;
}

UFortWeaponMeleeDualWieldItemDefinition::UFortWeaponMeleeDualWieldItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    ManagedVFX_OffhandDefaults = NULL;
    AnimTrailsOffhandWidth = 1;
    bUseAnimTrailsOffhand = true;
    bAttachAnimTrailsOffhandToWeapon = false;
}

