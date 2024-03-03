#include "SkyAtmosphereValues.h"

FSkyAtmosphereValues::FSkyAtmosphereValues() {
    this->RayleighScatteringScale = 1;
    this->RayleighExponentialDistribution = 1;
    this->MieScatteringScale = 1;
    this->MieAbsorptionScale = 1;
    this->MieAnisotropy = 1;
    this->MieExponentialDistribution = 1;
    this->OtherAbsorptionScale = 1;
    this->AerialPespectiveViewDistanceScale = 1;
    this->HeightFogContribution = 1;
}

