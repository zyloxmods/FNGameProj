#include "FortSplineAudioComponent.h"

void UFortSplineAudioComponent::SetSpline(USplineComponent* NewSpline) {
}

UAudioComponent* UFortSplineAudioComponent::GetAudioComponent() {
    return NULL;
}

UFortSplineAudioComponent::UFortSplineAudioComponent() {
    this->ClosestPointSound = NULL;
    this->Spline = NULL;
}

