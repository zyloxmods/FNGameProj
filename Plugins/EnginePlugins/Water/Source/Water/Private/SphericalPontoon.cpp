#include "SphericalPontoon.h"

FSphericalPontoon::FSphericalPontoon() {
    this->Radius = 1;
    this->WaterHeight = 1;
    this->WaterDepth = 1;
    this->ImmersionDepth = 1;
    this->WaterBodyIndex = 0;
    this->CurrentWaterBody = NULL;
}

