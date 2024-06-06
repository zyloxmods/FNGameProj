#include "FortSkyTube.h"
#include "Components/SplineComponent.h"



bool AFortSkyTube::IsSkyTubeEnabled() const {
    return false;
}

bool AFortSkyTube::IsShuttingDown() const {
    return false;
}

bool AFortSkyTube::IsExemptFromShutdown() const {
    return false;
}

float AFortSkyTube::GetDelayUntilDisabled() const {
    return 0.0f;
}

void AFortSkyTube::DeferredEnableOverlaps() {
}

AFortSkyTube::AFortSkyTube() {
    bExemptFromShutdown = false;
    Spline = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    bEnabled = true;
    bShuttingDown = false;
}

