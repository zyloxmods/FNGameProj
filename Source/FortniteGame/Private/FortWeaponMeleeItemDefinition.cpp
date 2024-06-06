#include "FortWeaponMeleeItemDefinition.h"

UFortWeaponMeleeItemDefinition::UFortWeaponMeleeItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    ManagedVFX_Defaults = NULL;
    IdleFXSocketName = TEXT("idle_fx");
    SwingFXSocketName = TEXT("SwingFX");
    NiagaraSkeletonDIVariableName = TEXT("User.SkeletalMesh");
    AnimTrailsFirstSocketName = TEXT("Melee_R_Upper");
    AnimTrailsSecondSocketName = TEXT("Melee_R_Lower");
    AnimTrailsWidth = 1;
    bUseAnimTrails = true;
    bAttachAnimTrailsToWeapon = false;
    bNeedsMaterial0MID = false;
    bWatchKills = false;
    bCandyCaneKillReaction = false;
    ItemType = EFortItemType::WeaponMelee;
}

