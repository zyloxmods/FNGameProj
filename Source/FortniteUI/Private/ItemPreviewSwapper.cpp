#include "ItemPreviewSwapper.h"

void AItemPreviewSwapper::UpdatePreviousSceneTransform(const FTransform& RelativeTransform) {
}

void AItemPreviewSwapper::UpdateNewSceneTransform(const FTransform& RelativeTransform) {
}

void AItemPreviewSwapper::SwapComplete() {
}


AItemPreviewSwapper::AItemPreviewSwapper() {
    this->CameraTransitionCurve = NULL;
    this->CameraTransitionLerpDuration = 1;
}

