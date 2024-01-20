#include "SkyLightValues.h"

FSkyLightValues::FSkyLightValues() {
    this->SkyLightMinOcclusion = 0.00f;
    this->VolumetricScatteringIntensity = 0.00f;
    this->Cubemap = NULL;
    this->DestinationCubemap = NULL;
}

