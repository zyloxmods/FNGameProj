#include "FortDamageNumbersActor.h"

void AFortDamageNumbersActor::SetMaterialParameters(FFortDamageNumberInfo& NewDamageNumberInfo, const FTransform& CameraTransform, const FVector& NumberLocation) {
}


AFortDamageNumbersActor::AFortDamageNumbersActor() {
    this->ComponentLifespan = 1.00f;
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
    this->PlayerMaterialParameterValue = 0.50f;
    this->ColorParameterName = TEXT("Color");
    this->AnimationLifespanParameterName = TEXT("Animation Lifespan");
    this->IsCriticalHitParameterName = TEXT("isCriticalHit?");
    this->SpacingPercentageForOnes = 0.80f;
    this->PositionParameterNames.AddDefaulted(9);
    this->DistanceFromCameraBeforeDoublingSize = 1024.00f;
    this->CriticalHitSizeMultiplier = 1.70f;
    this->FontXSize = 10.92f;
    this->FontYSize = 21.00f;
    this->NumberOfNumberRotations = 1.00f;
    this->ScaleRotationAngleParameterNames.AddDefaulted(9);
    this->DurationParameterNames.AddDefaulted(9);
    this->MaxScoreNumberDistance = -1.00f;
}

