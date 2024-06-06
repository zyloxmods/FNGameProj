#include "ActiveFortCamera.h"

FActiveFortCamera::FActiveFortCamera() {
    Camera = NULL;
    ViewTarget = NULL;
    TransitionAlpha = 1;
    TransitionUpdateRate = 1;
    BlendWeight = 1;
}

