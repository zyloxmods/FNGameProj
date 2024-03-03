#include "FortSpectatorCameraComponent.h"

void UFortSpectatorCameraComponent::OnFocalLengthSettingChanged(float NewFocalLength) {
}

void UFortSpectatorCameraComponent::OnApertureSettingChanged(float NewAperture) {
}

float UFortSpectatorCameraComponent::GetAutoCameraCutDistanceThreshold() const {
    return 0.0f;
}

UFortSpectatorCameraComponent::UFortSpectatorCameraComponent() {
    this->SpectatorController = NULL;
    this->IntendedViewTarget = NULL;
    this->CurrentBlend = NULL;
    this->ScreenFringeFOVCurve = NULL;
    this->ZoomRate = 1;
    this->FocalLengthInterpSpeed = 1;
}

