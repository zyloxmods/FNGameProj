#include "BuoyancyComponent.h"

void UBuoyancyComponent::OnPontoonExitedWater(const FSphericalPontoon& Pontoon) {
}

void UBuoyancyComponent::OnPontoonEnteredWater(const FSphericalPontoon& Pontoon) {
}

bool UBuoyancyComponent::IsInWaterBody() const {
    return false;
}

void UBuoyancyComponent::GetLastWaterSurfaceInfo(FVector& OutWaterPlaneLocation, FVector& OutWaterPlaneNormal, FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32& OutWaterBodyIdx, FVector& OutWaterVelocity) {
}

UBuoyancyComponent::UBuoyancyComponent() {
    this->SimulatingComponent = NULL;
}

