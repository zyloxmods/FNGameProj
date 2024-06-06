#include "FortDamageNumbersActor.h"

void AFortDamageNumbersActor::SetMaterialParameters(FFortDamageNumberInfo& NewDamageNumberInfo, const FTransform& CameraTransform, const FVector& NumberLocation) {
}


AFortDamageNumbersActor::AFortDamageNumbersActor() {
    ComponentLifespan = 1;
    MeshesByElement[0] = NULL;
    MeshesByElement[1] = NULL;
    MeshesByElement[2] = NULL;
    MeshesByElement[3] = NULL;
    MeshesByElement[4] = NULL;
    CritBuildingImpactMesh = NULL;
    MeshesByScoreCategory[0] = NULL;
    MeshesByScoreCategory[1] = NULL;
    MeshesByScoreCategory[2] = NULL;
    PlayerMaterialParameterName = TEXT("+Or-");
    PlayerMaterialParameterValue = 1;
    ColorParameterName = TEXT("Color");
    AnimationLifespanParameterName = TEXT("Animation Lifespan");
    IsCriticalHitParameterName = TEXT("isCriticalHit?");
    SpacingPercentageForOnes = 1;
    PositionParameterNames.AddDefaulted(9);
    DistanceFromCameraBeforeDoublingSize = 1;
    CriticalHitSizeMultiplier = 1;
    FontXSize = 1;
    FontYSize = 1;
    NumberOfNumberRotations = 1;
    ScaleRotationAngleParameterNames.AddDefaulted(9);
    DurationParameterNames.AddDefaulted(9);
    MaxScoreNumberDistance = 1;
}

