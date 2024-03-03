#include "FortRotatingItemTileButton.h"

void UFortRotatingItemTileButton::StopRotating() {
}


void UFortRotatingItemTileButton::StartRotating() {
}


void UFortRotatingItemTileButton::SetTimeBeweenRotations(float InTimeBetweenRotations) {
}

void UFortRotatingItemTileButton::SetNeedsItemRotateAnimation(bool InNeedsItemRotationAnimation) {
}

void UFortRotatingItemTileButton::RotateToNextItem() {
}

UFortRotatingItemTileButton::UFortRotatingItemTileButton() {
    this->TimeBetweenRotations = 1;
    this->bNeedsItemRotateAnimation = false;
}

