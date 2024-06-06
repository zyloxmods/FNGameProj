#include "FortProjectileTrajectory.h"
#include "Components/SplineComponent.h"

void AFortProjectileTrajectory::SetTrajectorySpline_Implementation(const TArray<FVector>& SplinePoints, const TArray<FVector>& SplineTangents) {
}

AFortProjectileTrajectory::AFortProjectileTrajectory() {
    SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
}

