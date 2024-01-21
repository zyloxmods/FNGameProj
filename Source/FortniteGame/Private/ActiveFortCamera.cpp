#include "ActiveFortCamera.h"

FActiveFortCamera::FActiveFortCamera() {
    this->Camera = NULL;
    this->ViewTarget = NULL;
    this->TransitionAlpha = 0.00f;
    this->TransitionUpdateRate = 0.00f;
    this->BlendWeight = 0.00f;
}

