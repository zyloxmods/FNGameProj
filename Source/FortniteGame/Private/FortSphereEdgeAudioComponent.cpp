#include "FortSphereEdgeAudioComponent.h"

void UFortSphereEdgeAudioComponent::SetRadius(float InRadius) {
}

bool UFortSphereEdgeAudioComponent::GetIsPlayerInside() const {
    return false;
}

UFortSphereEdgeAudioComponent::UFortSphereEdgeAudioComponent() {
    this->SoundOnEdge = NULL;
    this->SoundOnInside = NULL;
    this->Radius = 1;
    this->FadeOutDuration = 1;
    this->SphereEdgeAudioComponent = NULL;
    this->SphereInsideAudioComponent = NULL;
}

