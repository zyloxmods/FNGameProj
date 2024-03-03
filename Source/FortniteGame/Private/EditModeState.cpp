#include "EditModeState.h"

FEditModeState::FEditModeState() {
    this->EditClass = NULL;
    this->RotationIterations = 0;
    this->bMirrored = false;
    this->bCurrentlyValid = false;
}

