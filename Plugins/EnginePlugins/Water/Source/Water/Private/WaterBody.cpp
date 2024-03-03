#include "WaterBody.h"
#include "WaterSplineComponent.h"
#include "WaterSplineMetadata.h"


void AWaterBody::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged) {
}

UWaterSplineComponent* AWaterBody::GetWaterSpline() const {
    return NULL;
}

TArray<UStaticMeshComponent*> AWaterBody::GetWaterMeshComponents() const {
    return TArray<UStaticMeshComponent*>();
}

UMaterialInstanceDynamic* AWaterBody::GetWaterMaterialInstance() {
    return NULL;
}

UMaterialInstanceDynamic* AWaterBody::GetUnderwaterPostProcessMaterialInstance() {
    return NULL;
}

UMaterialInstanceDynamic* AWaterBody::GetRiverToOceanTransitionMaterialInstance() {
    return NULL;
}

UMaterialInstanceDynamic* AWaterBody::GetRiverToLakeTransitionMaterialInstance() {
    return NULL;
}

TArray<AWaterBodyIsland*> AWaterBody::GetIslands() const {
    return TArray<AWaterBodyIsland*>();
}

TArray<AWaterBodyExclusionVolume*> AWaterBody::GetExclusionVolumes() const {
    return TArray<AWaterBodyExclusionVolume*>();
}

AWaterBody::AWaterBody() {
    this->PhysicalMaterial = NULL;
    this->WaveSpeedFactor = 1;
    this->TargetWaveMaskDepth = 1;
    this->WaterBodyIndex = 0;
    this->WaveParamTextureOffset = 0;
    this->bFillCollisionUnderWaterBodiesForNavmesh = false;
    this->WaterBodyType = EWaterBodyType::River;
    this->WaterMaterial = NULL;
    this->UnderwaterPostProcessMaterial = NULL;
    this->bAffectsLandscape = true;
    this->bSnapToOceanHeight = false;
    this->bGenerateCollisions = true;
    this->bOverrideWaterMesh = false;
    this->WaterMeshOverride = NULL;
    this->RiverToLakeTransitionMat = NULL;
    this->RiverToOceanTransitionMat = NULL;
    this->OverlapMaterialPriority = 0;
    this->MaxWaveHeight = 1;
    this->CollisionProfileName = TEXT("OverlapAll");
    this->SplineComp = CreateDefaultSubobject<UWaterSplineComponent>(TEXT("WaterSpline"));
    this->Generator = NULL;
    this->WaterSplineMetadata = CreateDefaultSubobject<UWaterSplineMetadata>(TEXT("WaterSplineMetadata"));
    this->WaterMaterialInstance = NULL;
    this->RiverToLakeTransitionMID = NULL;
    this->RiverToOceanTransitionMID = NULL;
    this->UnderwaterPostProcessMID = NULL;
    this->OceanHeightOffset = 1;
    this->bCanAffectNavigation = false;
    this->WaterNavAreaClass = NULL;
}

