#include "TrackMovement.h"

FTrackMovement::FTrackMovement() {
    this->CurrentSpline = NULL;
    this->DistanceAlongSpline = 0.00f;
    this->bReverseDirectionAlongSpline = false;
}

