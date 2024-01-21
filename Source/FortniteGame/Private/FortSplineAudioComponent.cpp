#include "FortSplineAudioComponent.h"

void UFortSplineAudioComponent::SetSpline(USplineComponent* NewSpline) {
}

UAudioComponent* UFortSplineAudioComponent::GetAudioComponent() {
    return NULL;
}

UFortSplineAudioComponent::UFortSplineAudioComponent() {
    this->ClosestPointSound = NULL;
    this->UpdateFrequencyInaudible = 3.00f;
    this->UpdateFrequencyAudible = 0.20f;
    this->MaxDistanceOffset = 1000.00f;
    this->Spline = NULL;
    this->AudioAtClosestPoint = NULL;
}

