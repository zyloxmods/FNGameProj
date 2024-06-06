#include "FortLightningActor.h"



void AFortLightningActor::InitializeLightning(AActor* InActorToNotify) {
}

void AFortLightningActor::GenerateBoltLocations(const FVector& StartLocation, const FVector& EndLocation, float MinLength, float MaxLength, float RandomVectorContribution, float MinSizeDecayRate, float MaxSizeDecayRate, float FalloffMultiplier) {
}

void AFortLightningActor::CleanupLightning() {
}

AFortLightningActor::AFortLightningActor() {
    MaxBoltMeshes = 0;
    MaxBoltWidth = 1;
    BoltMaterialParamTopPct = TEXT("topSplinePercentage");
    BoltMaterialParamBottomPct = TEXT("BottomSplinePercentage");
    ActorToNotify = NULL;
}

