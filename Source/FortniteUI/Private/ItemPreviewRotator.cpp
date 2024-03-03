#include "ItemPreviewRotator.h"


FInterpolatedTransitionCamera AItemPreviewRotator::GetInterpolatedTransitionCameraPosition(const FTransform& TransitionCameraTransform, float TransitionCameraFieldOfView, float ProgressThroughTransitionSecs, float TransitionDurationSecs) const {
    return FInterpolatedTransitionCamera{};
}

void AItemPreviewRotator::CameraTransitionComplete() {
}

AItemPreviewRotator::AItemPreviewRotator() {
    this->CameraTransitionLerpDuration = 1;
}

