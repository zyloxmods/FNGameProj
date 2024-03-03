#include "SkyLightValues.h"

FSkyLightValues::FSkyLightValues() {
    this->SkyLightMinOcclusion = 1;
    this->VolumetricScatteringIntensity = 1;
    this->Cubemap = NULL;
    this->DestinationCubemap = NULL;
}

