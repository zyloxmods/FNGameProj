#include "FortWeaponMeleeItemDefinition.h"

UFortWeaponMeleeItemDefinition::UFortWeaponMeleeItemDefinition() {
    this->ManagedVFX_Defaults = NULL;
    this->IdleFXSocketName = TEXT("idle_fx");
    this->SwingFXSocketName = TEXT("SwingFX");
    this->NiagaraSkeletonDIVariableName = TEXT("User.SkeletalMesh");
    this->AnimTrailsFirstSocketName = TEXT("Melee_R_Upper");
    this->AnimTrailsSecondSocketName = TEXT("Melee_R_Lower");
    this->AnimTrailsWidth = 1;
    this->bUseAnimTrails = true;
    this->bAttachAnimTrailsToWeapon = false;
    this->bNeedsMaterial0MID = false;
    this->bWatchKills = false;
    this->bCandyCaneKillReaction = false;
    this->ItemType = EFortItemType::WeaponMelee;
}

