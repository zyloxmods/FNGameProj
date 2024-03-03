#include "ProceduralPointCloudPoint.h"

FProceduralPointCloudPoint::FProceduralPointCloudPoint() {
    this->SurfaceObject = NULL;
    this->Object = NULL;
    this->ObjectVariation = 0;
    this->CollisionRadius = 1;
    this->SourcePointGeneratorIndex = 1;
}

