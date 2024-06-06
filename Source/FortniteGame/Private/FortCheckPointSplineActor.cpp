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
    bSmoothSplineMesh = false;
    SplineMeshTension = 1;
    bShowSplineMeshAtStartup = false;
    bDrawSplineMapUI = false;
    NumSplineMapUISegments = 0;
    SplineMapUIThickness = 1;
    bSplineMapUIAntialias = true;
}

