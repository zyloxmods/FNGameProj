#include "FortNativeCurieFXResponse.h"

FFortNativeCurieFXResponse::FFortNativeCurieFXResponse() {
    GameplayCueResponse = EFortNativeCurieFXCueResponse::IgnoreCue;
    bShouldPlayGeneralVFX = false;
    bShouldPlayAmbientAudio = false;
    bShouldPlayGlow = false;
    bShouldPlayFXAsAOE = false;
}

