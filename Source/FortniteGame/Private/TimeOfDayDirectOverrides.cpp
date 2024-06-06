#include "TimeOfDayDirectOverrides.h"

FTimeOfDayDirectOverrides::FTimeOfDayDirectOverrides() {
    bOverrideLightIntensity = false;
    bOverrideLightColor = false;
    bOverrideSkyLightIntensity = false;
    bOverrideSkyLightColor = false;
    bOverrideFogDensity = false;
    bOverrideFogColor = false;
    bOverrideFogStartDistance = false;
    OverriddenLightIntensity = 1;
    OverriddenSkyLightIntensity = 1;
    OverriddenFogDensity = 1;
    OverriddenFogStartDistance = 1;
    OverriddenPostProcessActorClass = NULL;
}

