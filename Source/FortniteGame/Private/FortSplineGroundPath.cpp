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
    this->MaxDistanceBetweenPathwayPoints = 1;
    this->EvenlySpacedPointsDistance = 1;
    this->TangentDistance = 1;
    this->PathUpdateSecondIntervals = 1;
    this->PathTestRadius = 1;
    this->MinDistanceForAddingRawPoint = 1;
    this->bDrawDebugRawPoints = false;
    this->bDrawDebugRawEnd = false;
    this->bDrawDebugReppedPoints = false;
    this->bDrawDebugEvenlySizedSegments = false;
    this->bDrawDebugTangents = false;
    this->bDrawDebugCollision = false;
    this->bDrawDebugSplineEnd = false;
    this->CleanupTime = 1;
    this->LerpScaleRate = 1;
    this->GrowthSmoothingStrength = 1;
    this->MostRecentlyAddedTime = 1;
    this->ServerIndexToAssign = 0;
    this->StaticMesh = NULL;
    this->Material = NULL;
    this->ForwardAxis = ESplineMeshAxis::X;
    this->LerpLocationRate = 1;
    this->bMostRecentLocationHasBeenSet = false;
    this->bHasWarnedOfArrayOverfill = false;
    this->bHasWarnedOfUnableToRepDestroy = false;
    this->FirstActiveEvenlySizedSegmentIndex = 0;
    this->MaxReppedPointsBeforeOverfill = 0;
    this->DistanceRemainingToNextEvenlySpacedPoint = 1;
    this->PositionFinalizedParameterName = TEXT("AttachedAlpha");
    this->GrowthParameterName = TEXT("Growth");
    this->ShrinkParameterName = TEXT("Shrink");
    this->OpacityParameterName = TEXT("Opacity");
    this->TotalFadeInTime = 1;
    this->TotalFadeOutTime = 1;
    this->SectionsLifeTime = 1;
    this->ShrinkTimeMultWhenFading = 1;
    this->ShrinkTimeMultWhenBurning = 1;
    this->GrowthTimeMult = 1;
    this->LocationLerpTimeMult = 1;
    this->CurrentFadeInTime = 1;
    this->CurrentFadeOutTime = 1;
    this->TotalSplineMeshesToFadeIn = 0;
    this->LowestUninitializedRawLastServerIndex = 0;
    this->LowestUninitializedReppedIndex = 0;
    this->NumIgnitedSections = 0;
    this->bSomeSectionsAreFadingOut = false;
}

