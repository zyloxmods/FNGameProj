#include "FortGliderAudioComponent.h"

void UFortGliderAudioComponent::UpdateGliderAudio(float ForwardDot, float RightDot) {
}

bool UFortGliderAudioComponent::IsParachuteFullyDeployed() const {
    return false;
}

UFortGliderAudioComponent::UFortGliderAudioComponent() {
    bDebugIgnoreFullyDeployed = false;
    PlayerParachute = NULL;
}

