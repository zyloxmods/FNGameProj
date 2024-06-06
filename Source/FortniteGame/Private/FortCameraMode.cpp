#include "FortCameraMode.h"

UFortCameraMode::UFortCameraMode() {
    PlayerCamera = NULL;
    TransitionTime = 1;
    TransitionOutTime = 1;
    bOverrideTransitionOutTime = false;
    bResetInterpolation = true;
    bShouldAllowBlendingWhenActive = true;
    bShouldAllowBlendingWhenInactive = true;
    bShouldPassViewTargetCheckOnTransition = false;
}

