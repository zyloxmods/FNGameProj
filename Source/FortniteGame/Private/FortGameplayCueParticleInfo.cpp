#include "FortGameplayCueParticleInfo.h"

FFortGameplayCueParticleInfo::FFortGameplayCueParticleInfo() {
    FXType = EFXType::GenericAnimNotify;
    NiagaraSystem = NULL;
    ParticleSystem = NULL;
    bCastShadow = false;
    bOverrideCondition = false;
    bOverrideAttachment = false;
}

