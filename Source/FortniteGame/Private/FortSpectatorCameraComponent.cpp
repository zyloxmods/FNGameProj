#include "FortSpectatorCameraComponent.h"

void UFortSpectatorCameraComponent::OnFocalLengthSettingChanged(float NewFocalLength) {
}

void UFortSpectatorCameraComponent::OnApertureSettingChanged(float NewAperture) {
}

float UFortSpectatorCameraComponent::GetAutoCameraCutDistanceThreshold() const {
    return 0.0f;
}

UFortSpectatorCameraComponent::UFortSpectatorCameraComponent() {
    SpectatorController = NULL;
    IntendedViewTarget = NULL;
    CurrentBlend = NULL;
    ScreenFringeFOVCurve = NULL;
    ZoomRate = 1;
    FocalLengthInterpSpeed = 1;
}

