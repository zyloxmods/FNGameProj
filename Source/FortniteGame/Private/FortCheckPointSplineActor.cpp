#include "FortCheckPointSplineActor.h"

void AFortCheckPointSplineActor::ShowSplineMeshes(int32 SplineIndexStart, int32 SplineIndexEnd) {
}

void AFortCheckPointSplineActor::ShowMapUI(int32 SplineIndexStart, int32 SplineIndexEnd) {
}

void AFortCheckPointSplineActor::ShowFullMapUI() {
}

void AFortCheckPointSplineActor::HideSplineMeshes() {
}

void AFortCheckPointSplineActor::HideMapUI() {
}



AFortCheckPointSplineActor::AFortCheckPointSplineActor() {
    this->bSmoothSplineMesh = false;
    this->SplineMeshTension = 1;
    this->bShowSplineMeshAtStartup = false;
    this->bDrawSplineMapUI = false;
    this->NumSplineMapUISegments = 0;
    this->SplineMapUIThickness = 1;
    this->bSplineMapUIAntialias = true;
}

