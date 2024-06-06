#include "FortWeaponPickaxeAthena.h"

bool AFortWeaponPickaxeAthena::HasAuthoredData() {
    return false;
}

bool AFortWeaponPickaxeAthena::GetUseAnimTrailsPSC() const {
    return false;
}

UFXSystemComponent* AFortWeaponPickaxeAthena::GetSwingVFXComponent() const {
    return NULL;
}

UParticleSystemComponent* AFortWeaponPickaxeAthena::GetSwingPSC() const {
    return NULL;
}

FName AFortWeaponPickaxeAthena::GetSwingFXSocketName() const {
    return NAME_None;
}

UFXSystemComponent* AFortWeaponPickaxeAthena::GetIdleVFXComponent() const {
    return NULL;
}

UParticleSystemComponent* AFortWeaponPickaxeAthena::GetIdlePSC() const {
    return NULL;
}

FName AFortWeaponPickaxeAthena::GetIdleFXSocketName() const {
    return NAME_None;
}

UFXSystemComponent* AFortWeaponPickaxeAthena::GetAnimTrailVFXComponent() const {
    return NULL;
}

float AFortWeaponPickaxeAthena::GetAnimTrailsWidth() const {
    return 0.0f;
}

FName AFortWeaponPickaxeAthena::GetAnimTrailsSecondSocketName() const {
    return NAME_None;
}

UParticleSystem* AFortWeaponPickaxeAthena::GetAnimTrailsPSCTemplate() const {
    return NULL;
}

UFXSystemComponent* AFortWeaponPickaxeAthena::GetAnimTrailsPSC() const {
    return NULL;
}

UNiagaraSystem* AFortWeaponPickaxeAthena::GetAnimTrailsNiagaraAsset() const {
    return NULL;
}

FName AFortWeaponPickaxeAthena::GetAnimTrailsFirstSocketName() const {
    return NAME_None;
}

UFXSystemComponent* AFortWeaponPickaxeAthena::CreateAnimTrailFX() {
    return NULL;
}

bool AFortWeaponPickaxeAthena::AttachesAnimTrailsToWeapon() const {
    return false;
}

AFortWeaponPickaxeAthena::AFortWeaponPickaxeAthena() {
    SwingVFX = NULL;
    IdleVFX = NULL;
    AnimTrailsPSC = NULL;
    AnimTrailsPSCTemplate = NULL;
    AnimTrailsNiagaraAsset = NULL;
    bUseAnimTrailsPSC = true;
    AnimTrailsFirstSocketName = TEXT("Melee_R_Upper");
    AnimTrailsSecondSocketName = TEXT("Melee_R_Lower");
    AnimTrailsWidth = 1;
    IdleFXSocketName = TEXT("idle_fx");
    SwingFXSocketName = TEXT("SwingFX");
    GenericImpactSound = NULL;
    Material0MID = NULL;
    bWatchKills = false;
    WatchedKills = 1;
    bCandyCaneKillReaction = false;
    CQCEnemyAudio = NULL;
    CachedCosmeticItemDefinition = NULL;
}

