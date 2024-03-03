#include "FortCameraMode.h"

UFortCameraMode::UFortCameraMode() {
    this->PlayerCamera = NULL;
    this->TransitionTime = 1;
    this->TransitionOutTime = 1;
    this->bOverrideTransitionOutTime = false;
    this->bResetInterpolation = true;
    this->bShouldAllowBlendingWhenActive = true;
    this->bShouldAllowBlendingWhenInactive = true;
    this->bShouldPassViewTargetCheckOnTransition = false;
}

