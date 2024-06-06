#include "FortSplineGroundPath.h"
#include "Net/UnrealNetwork.h"

void AFortSplineGroundPath::StartNextSectionTimedOut() {
}

void AFortSplineGroundPath::OnRep_MostRecentlyAddedLocation() {
}


void AFortSplineGroundPath::DebugDisplayPathPoints() const {
}

void AFortSplineGroundPath::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortSplineGroundPath, MostRecentlyAddedLocation);
    DOREPLIFETIME(AFortSplineGroundPath, FortReppedPointList);
}

AFortSplineGroundPath::AFortSplineGroundPath() {
    MaxDistanceBetweenPathwayPoints = 1;
    EvenlySpacedPointsDistance = 1;
    TangentDistance = 1;
    PathUpdateSecondIntervals = 1;
    PathTestRadius = 1;
    MinDistanceForAddingRawPoint = 1;
    bDrawDebugRawPoints = false;
    bDrawDebugRawEnd = false;
    bDrawDebugReppedPoints = false;
    bDrawDebugEvenlySizedSegments = false;
    bDrawDebugTangents = false;
    bDrawDebugCollision = false;
    bDrawDebugSplineEnd = false;
    CleanupTime = 1;
    LerpScaleRate = 1;
    GrowthSmoothingStrength = 1;
    MostRecentlyAddedTime = 1;
    ServerIndexToAssign = 0;
    StaticMesh = NULL;
    Material = NULL;
    ForwardAxis = ESplineMeshAxis::X;
    LerpLocationRate = 1;
    bMostRecentLocationHasBeenSet = false;
    bHasWarnedOfArrayOverfill = false;
    bHasWarnedOfUnableToRepDestroy = false;
    FirstActiveEvenlySizedSegmentIndex = 0;
    MaxReppedPointsBeforeOverfill = 0;
    DistanceRemainingToNextEvenlySpacedPoint = 1;
    PositionFinalizedParameterName = TEXT("AttachedAlpha");
    GrowthParameterName = TEXT("Growth");
    ShrinkParameterName = TEXT("Shrink");
    OpacityParameterName = TEXT("Opacity");
    TotalFadeInTime = 1;
    TotalFadeOutTime = 1;
    SectionsLifeTime = 1;
    ShrinkTimeMultWhenFading = 1;
    ShrinkTimeMultWhenBurning = 1;
    GrowthTimeMult = 1;
    LocationLerpTimeMult = 1;
    CurrentFadeInTime = 1;
    CurrentFadeOutTime = 1;
    TotalSplineMeshesToFadeIn = 0;
    LowestUninitializedRawLastServerIndex = 0;
    LowestUninitializedReppedIndex = 0;
    NumIgnitedSections = 0;
    bSomeSectionsAreFadingOut = false;
}

