#include "FortGameplayCueDecalInfo.h"

FFortGameplayCueDecalInfo::FFortGameplayCueDecalInfo() {
    this->bOverrideCondition = false;
    this->bOverrideAttachment = false;
    this->bOverrideFadeOut = false;
    this->Decal = NULL;
    this->FadeOutStartDelay = 0.00f;
    this->FadeOutDuration = 0.00f;
}

