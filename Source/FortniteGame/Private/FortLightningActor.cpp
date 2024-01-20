#include "FortLightningActor.h"



void AFortLightningActor::InitializeLightning(AActor* InActorToNotify) {
}

void AFortLightningActor::GenerateBoltLocations(const FVector& StartLocation, const FVector& EndLocation, float MinLength, float MaxLength, float RandomVectorContribution, float MinSizeDecayRate, float MaxSizeDecayRate, float FalloffMultiplier) {
}

void AFortLightningActor::CleanupLightning() {
}

AFortLightningActor::AFortLightningActor() {
    this->MaxBoltMeshes = 32;
    this->MaxBoltWidth = 25.00f;
    this->BoltMaterialParamTopPct = TEXT("topSplinePercentage");
    this->BoltMaterialParamBottomPct = TEXT("BottomSplinePercentage");
    this->ActorToNotify = NULL;
}

