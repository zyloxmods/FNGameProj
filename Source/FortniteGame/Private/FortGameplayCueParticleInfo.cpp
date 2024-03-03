#include "FortGameplayCueParticleInfo.h"

FFortGameplayCueParticleInfo::FFortGameplayCueParticleInfo() {
    this->FXType = EFXType::GenericAnimNotify;
    this->NiagaraSystem = NULL;
    this->ParticleSystem = NULL;
    this->bCastShadow = false;
    this->bOverrideCondition = false;
    this->bOverrideAttachment = false;
}

