#include "BuoyancyData.h"

FBuoyancyData::FBuoyancyData() {
    this->BuoyancyCoefficient = 1;
    this->BuoyancyDamp = 1;
    this->BuoyancyDamp2 = 1;
    this->BuoyancyRampMinVelocity = 1;
    this->BuoyancyRampMaxVelocity = 1;
    this->BuoyancyRampMax = 1;
    this->MaxBuoyantForce = 1;
    this->WaterShorePushFactor = 1;
    this->WaterVelocityStrength = 1;
    this->MaxWaterForce = 1;
    this->DragCoefficient = 1;
    this->DragCoefficient2 = 1;
    this->AngularDragCoefficient = 1;
    this->MaxDragSpeed = 1;
    this->bApplyDragForcesInWater = false;
}

