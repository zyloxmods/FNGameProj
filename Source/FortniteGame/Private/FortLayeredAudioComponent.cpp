#include "FortLayeredAudioComponent.h"

void UFortLayeredAudioComponent::StopAllAudio() {
}

void UFortLayeredAudioComponent::SetFloatParameterExt(FName Name, float Value) {
}

UFortLayeredAudioComponent::UFortLayeredAudioComponent() {
    this->bFadeWhenOwnerDestroyed = true;
    this->FadeTimeWhenOwnerDestroyed = 1;
}

