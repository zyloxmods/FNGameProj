#include "CreativeBlueprintLibrary.h"

TArray<FVector> UCreativeBlueprintLibrary::SegmentSphereIntersection(const FVector& SegmentStart, const FVector& SegmentEnd, const FVector& SphereOrigin, const float SphereRadius) {
    return TArray<FVector>();
}

TArray<FVector> UCreativeBlueprintLibrary::SegmentCylinderIntersection(const FVector& SegmentStart, const FVector& SegmentEnd, const FVector& CylinderOrigin, const float CylinderRadius) {
    return TArray<FVector>();
}

void UCreativeBlueprintLibrary::LogHUDMessageWarning(const FString& inString) {
}

FName UCreativeBlueprintLibrary::GetNameFromCollisionProfile(FCollisionProfileName InCollisionProfile) {
    return NAME_None;
}

UFortMinigameManager* UCreativeBlueprintLibrary::GetMinigameManager(AController* Controller, ESubGame SubGame) {
    return NULL;
}

UCreativeBlueprintLibrary::UCreativeBlueprintLibrary() {
}

