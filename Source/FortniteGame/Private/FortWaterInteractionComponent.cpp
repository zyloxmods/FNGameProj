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
    bIsEnabled = true;
    bTickComponentForces = true;
    bIncludeWaves = true;
    bAllowCachedDataInLargeBodies = true;
    WaterVelocityForceMultiplier = 1;
    WaterVelocityShallowDepth = 1;
    WaterVelocityShallowMultiplier = 1;
    WaterVelocityShoreBias = 1;
    BuoyancyFactor = 1;
    UpBuoyancyDrag = 1;
    UpBuoyancyDrag2 = 1;
    DownBuoyancyDrag = 1;
    DownBuoyancyDrag2 = 1;
    HorizontalDrag = 1;
    HorizontalDrag2 = 1;
}

