#include "FortWaterBodyActor.h"

void AFortWaterBodyActor::SetSwampLocationAndRadius(const FVector& InPosition, float InRadius) {
}




float AFortWaterBodyActor::GetWaterVelocityAtSplineInputKey(float InKey) const {
    return 0.0f;
}

void AFortWaterBodyActor::GetWaterSurfaceInfo(FVector QueryLocation, FVector& WaterPlaneLocation, FVector& WaterPlaneNormal, FVector& WaterSurfacePosition, float& WaterDepth, int32& WaterBodyIdx, FVector& WaterVelocity, bool bIncludeDepth, bool bIncludeWaves) const {
}

AFortWaterBodyActor::AFortWaterBodyActor() {
    WaterPriority = 0;
    bIsSwamp = false;
}

