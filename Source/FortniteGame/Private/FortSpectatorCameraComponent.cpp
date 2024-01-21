#include "FortSpectatorCameraComponent.h"

float UFortSpectatorCameraComponent::GetAutoCameraCutDistanceThreshold() const {
    return 0.0f;
}

UFortSpectatorCameraComponent::UFortSpectatorCameraComponent() {
    this->SpectatorController = NULL;
    this->IntendedViewTarget = NULL;
    this->CurrentBlend = NULL;
    this->ScreenFringeFOVCurve = NULL;
    this->ZoomRate = 50.00f;
    this->FocalLengthInterpSpeed = 10.00f;
}

