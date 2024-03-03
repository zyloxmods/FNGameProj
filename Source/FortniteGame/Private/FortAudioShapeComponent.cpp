#include "FortAudioShapeComponent.h"

void UFortAudioShapeComponent::UpdateAudioShape(TArray<TWeakObjectPtr<APlayerController>>& InLocalControllers) {
}

void UFortAudioShapeComponent::Enable() {
}

void UFortAudioShapeComponent::Disable(float FadeTime) {
}

UFortAudioShapeComponent::UFortAudioShapeComponent() {
    this->UpdateFrequencyInaudible = 1;
    this->UpdateFrequencyAudible = 1;
    this->MaxDistanceOffset = 1;
    this->SmoothingDistance = 1;
}

