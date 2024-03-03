#include "TrackMovement.h"

FTrackMovement::FTrackMovement() {
    this->CurrentSpline = NULL;
    this->DistanceAlongSpline = 1;
    this->bReverseDirectionAlongSpline = false;
}

