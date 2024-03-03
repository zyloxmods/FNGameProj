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
    this->SwingVFX = NULL;
    this->IdleVFX = NULL;
    this->AnimTrailsPSC = NULL;
    this->AnimTrailsPSCTemplate = NULL;
    this->AnimTrailsNiagaraAsset = NULL;
    this->bUseAnimTrailsPSC = true;
    this->AnimTrailsFirstSocketName = TEXT("Melee_R_Upper");
    this->AnimTrailsSecondSocketName = TEXT("Melee_R_Lower");
    this->AnimTrailsWidth = 1;
    this->IdleFXSocketName = TEXT("idle_fx");
    this->SwingFXSocketName = TEXT("SwingFX");
    this->GenericImpactSound = NULL;
    this->Material0MID = NULL;
    this->bWatchKills = false;
    this->WatchedKills = 1;
    this->bCandyCaneKillReaction = false;
    this->CQCEnemyAudio = NULL;
    this->CachedCosmeticItemDefinition = NULL;
}

