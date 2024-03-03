#include "FortWaterInteractionComponent.h"



bool UFortWaterInteractionComponent::IsInWater() const {
    return false;
}

bool UFortWaterInteractionComponent::IsEnabled() const {
    return false;
}

void UFortWaterInteractionComponent::GetLastWaterSurfaceInfo(FVector& WaterPlaneLocation, FVector& WaterPlaneNormal, FVector& WaterSurfacePosition, float& WaterDepth, int32& WaterBodyIdx, FVector& WaterVelocity) {
}

AFortWaterBodyActor* UFortWaterInteractionComponent::GetCurrentWaterBody() const {
    return NULL;
}

UFortWaterInteractionComponent::UFortWaterInteractionComponent() {
    this->bIsEnabled = true;
    this->bTickComponentForces = true;
    this->bIncludeWaves = true;
    this->bAllowCachedDataInLargeBodies = true;
    this->WaterVelocityForceMultiplier = 1;
    this->WaterVelocityShallowDepth = 1;
    this->WaterVelocityShallowMultiplier = 1;
    this->WaterVelocityShoreBias = 1;
    this->BuoyancyFactor = 1;
    this->UpBuoyancyDrag = 1;
    this->UpBuoyancyDrag2 = 1;
    this->DownBuoyancyDrag = 1;
    this->DownBuoyancyDrag2 = 1;
    this->HorizontalDrag = 1;
    this->HorizontalDrag2 = 1;
}

