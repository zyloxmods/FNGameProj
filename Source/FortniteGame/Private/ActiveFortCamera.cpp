#include "ActiveFortCamera.h"

FActiveFortCamera::FActiveFortCamera() {
    this->Camera = NULL;
    this->ViewTarget = NULL;
    this->TransitionAlpha = 1;
    this->TransitionUpdateRate = 1;
    this->BlendWeight = 1;
}

