#include "FortAudioShapeComponent.h"

void UFortAudioShapeComponent::UpdateAudioShape(TArray<TWeakObjectPtr<APlayerController>>& InLocalControllers) {
}

void UFortAudioShapeComponent::Enable() {
}

void UFortAudioShapeComponent::Disable(float FadeTime) {
}

UFortAudioShapeComponent::UFortAudioShapeComponent() {
    UpdateFrequencyInaudible = 1;
    UpdateFrequencyAudible = 1;
    MaxDistanceOffset = 1;
    SmoothingDistance = 1;
}

