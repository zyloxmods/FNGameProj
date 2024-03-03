#include "ArsenicCoreGCNGhostAudioHelperComponent.h"

void UArsenicCoreGCNGhostAudioHelperComponent::SetTargetPawn(APawn* InTargetPawn) {
}

void UArsenicCoreGCNGhostAudioHelperComponent::SetLoopingAudioComponent(UAudioComponent* InLoopingAudioComponent) {
}

void UArsenicCoreGCNGhostAudioHelperComponent::PopVelocitySoundMix() {
}

UArsenicCoreGCNGhostAudioHelperComponent::UArsenicCoreGCNGhostAudioHelperComponent() {
    this->VelocityAudioInputRange_Min = 1;
    this->VelocityAudioInputRange_Max = 1;
    this->AudioInterpSpeed = 1;
    this->VelocitySoundMix = NULL;
    this->VelocityThresholdForMixModActivation = 1;
}

