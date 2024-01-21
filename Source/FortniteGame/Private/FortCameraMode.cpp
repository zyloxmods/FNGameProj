#include "FortCameraMode.h"

UFortCameraMode::UFortCameraMode() {
    this->PlayerCamera = NULL;
    this->TransitionTime = 0.00f;
    this->TransitionOutTime = 0.00f;
    this->bResetInterpolation = true;
    this->bShouldAllowBlendingWhenActive = true;
    this->bShouldAllowBlendingWhenInactive = true;
}

