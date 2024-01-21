#include "FortPlacementActorTagTest.h"

bool UFortPlacementActorTagTest::ShouldApplyTagsToPlacementActor_Implementation(AFortPlacementActor* FocusPlacementActor, const FVector& AveragePlacementActorLocation) const {
    return false;
}

bool UFortPlacementActorTagTest::LineTraceByChannel(AFortPlacementActor* PlacementActor, const FVector Start, const FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, FHitResult& OutHit, bool bIgnoreSelf) const {
    return false;
}

UFortPlacementActorTagTest::UFortPlacementActorTagTest() {
}

