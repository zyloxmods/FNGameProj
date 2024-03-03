#include "FortNativeCurieFXResponse.h"

FFortNativeCurieFXResponse::FFortNativeCurieFXResponse() {
    this->GameplayCueResponse = EFortNativeCurieFXCueResponse::IgnoreCue;
    this->bShouldPlayGeneralVFX = false;
    this->bShouldPlayAmbientAudio = false;
    this->bShouldPlayGlow = false;
    this->bShouldPlayFXAsAOE = false;
}

