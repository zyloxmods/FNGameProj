#include "TimeOfDayDirectOverrides.h"

FTimeOfDayDirectOverrides::FTimeOfDayDirectOverrides() {
    this->bOverrideLightIntensity = false;
    this->bOverrideLightColor = false;
    this->bOverrideSkyLightIntensity = false;
    this->bOverrideSkyLightColor = false;
    this->bOverrideFogDensity = false;
    this->bOverrideFogColor = false;
    this->bOverrideFogStartDistance = false;
    this->OverriddenLightIntensity = 1;
    this->OverriddenSkyLightIntensity = 1;
    this->OverriddenFogDensity = 1;
    this->OverriddenFogStartDistance = 1;
    this->OverriddenPostProcessActorClass = NULL;
}

