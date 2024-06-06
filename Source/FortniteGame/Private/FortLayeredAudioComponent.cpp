#include "FortLayeredAudioComponent.h"

void UFortLayeredAudioComponent::StopAllAudio() {
}

void UFortLayeredAudioComponent::SetFloatParameterExt(FName Name, float Value) {
}

UFortLayeredAudioComponent::UFortLayeredAudioComponent() {
    bFadeWhenOwnerDestroyed = true;
    FadeTimeWhenOwnerDestroyed = 1;
}

