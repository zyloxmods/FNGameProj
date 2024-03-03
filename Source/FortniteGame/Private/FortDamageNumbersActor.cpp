#include "FortDamageNumbersActor.h"

void AFortDamageNumbersActor::SetMaterialParameters(FFortDamageNumberInfo& NewDamageNumberInfo, const FTransform& CameraTransform, const FVector& NumberLocation) {
}


AFortDamageNumbersActor::AFortDamageNumbersActor() {
    this->ComponentLifespan = 1;
    this->MeshesByElement[0] = NULL;
    this->MeshesByElement[1] = NULL;
    this->MeshesByElement[2] = NULL;
    this->MeshesByElement[3] = NULL;
    this->MeshesByElement[4] = NULL;
    this->CritBuildingImpactMesh = NULL;
    this->MeshesByScoreCategory[0] = NULL;
    this->MeshesByScoreCategory[1] = NULL;
    this->MeshesByScoreCategory[2] = NULL;
    this->PlayerMaterialParameterName = TEXT("+Or-");
    this->PlayerMaterialParameterValue = 1;
    this->ColorParameterName = TEXT("Color");
    this->AnimationLifespanParameterName = TEXT("Animation Lifespan");
    this->IsCriticalHitParameterName = TEXT("isCriticalHit?");
    this->SpacingPercentageForOnes = 1;
    this->PositionParameterNames.AddDefaulted(9);
    this->DistanceFromCameraBeforeDoublingSize = 1;
    this->CriticalHitSizeMultiplier = 1;
    this->FontXSize = 1;
    this->FontYSize = 1;
    this->NumberOfNumberRotations = 1;
    this->ScaleRotationAngleParameterNames.AddDefaulted(9);
    this->DurationParameterNames.AddDefaulted(9);
    this->MaxScoreNumberDistance = 1;
}

