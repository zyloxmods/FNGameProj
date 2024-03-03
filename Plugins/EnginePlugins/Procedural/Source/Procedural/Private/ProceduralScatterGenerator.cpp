#include "ProceduralScatterGenerator.h"

UProceduralScatterGenerator::UProceduralScatterGenerator() {
    this->ScatterMethod = EProceduralScatterMethod::Density;
    this->RandomSeed = 0;
    this->NumUniqueSourcePointPatterns = 0;
    this->GridRotation = 1;
    this->bAllScatterPointsBlocking = false;
    this->bLocalDistribution = false;
}

