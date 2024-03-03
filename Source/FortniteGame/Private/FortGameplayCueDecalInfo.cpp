#include "FortGameplayCueDecalInfo.h"

FFortGameplayCueDecalInfo::FFortGameplayCueDecalInfo() {
    this->bOverrideCondition = false;
    this->bOverrideAttachment = false;
    this->bOverrideFadeOut = false;
    this->Decal = NULL;
    this->FadeOutStartDelay = 1;
    this->FadeOutDuration = 1;
}

