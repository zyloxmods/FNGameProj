#include "ExponentialHeightFogValues.h"

FExponentialHeightFogValues::FExponentialHeightFogValues() {
    this->FogDensity = 1;
    this->FogHeightFalloff = 1;
    this->FogMaxOpacity = 1;
    this->StartDistance = 1;
    this->DirectionalInscatteringExponent = 1;
    this->DirectionalInscatteringStartDistance = 1;
    this->VolumetricFogScatteringDistribution = 1;
    this->VolumetricFogExtinctionScale = 1;
    this->VolumetricFogDistance = 1;
}

