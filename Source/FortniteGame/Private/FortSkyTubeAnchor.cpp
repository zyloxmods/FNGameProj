#include "FortSkyTubeAnchor.h"


bool AFortSkyTubeAnchor::IsExemptFromShutdown() const {
    return false;
}

bool AFortSkyTubeAnchor::IsEnabled() const {
    return false;
}

AFortSkyTubeAnchor::AFortSkyTubeAnchor() {
    bEnabled = true;
    bExemptFromShutdown = false;
}

