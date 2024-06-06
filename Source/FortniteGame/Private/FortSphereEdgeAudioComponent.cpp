#include "FortSphereEdgeAudioComponent.h"

void UFortSphereEdgeAudioComponent::SetRadius(float InRadius) {
}

bool UFortSphereEdgeAudioComponent::GetIsPlayerInside() const {
    return false;
}

UFortSphereEdgeAudioComponent::UFortSphereEdgeAudioComponent() {
    SoundOnEdge = NULL;
    SoundOnInside = NULL;
    Radius = 1;
    FadeOutDuration = 1;
    SphereEdgeAudioComponent = NULL;
    SphereInsideAudioComponent = NULL;
}

