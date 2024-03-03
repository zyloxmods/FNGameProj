#include "FortFXManager.h"
#include "Templates/SubclassOf.h"

AActor* AFortFXManager::SpawnPooledFXActor(UObject* WorldContextObject, TSubclassOf<AActor> FXActorClass, const FTransform& SpawnTransform) {
    return NULL;
}

void AFortFXManager::ShrinkGenericMIDPoolToSize(UObject* WorldContextObject, UMaterialInterface* Material, int32 DesiredNewSize) {
}

void AFortFXManager::ReturnPickupStretchMIDToPool(AFortPickupEffect* PickupObject, UPrimitiveComponent* Component, int32 ElementIndex) {
}

void AFortFXManager::ReturnGenericPooledMID(UObject* WorldContextObject, UMaterialInterface* Material, UMaterialInstanceDynamic* UsedMID) {
}

void AFortFXManager::ReturnFXActorToPool(UObject* WorldContextObject, AActor* FXActor) {
}

void AFortFXManager::RemoveSplineMeshAnimations(UObject* WorldContextObject, USplineMeshComponent* SplineMesh) {
}

void AFortFXManager::RemoveParticleAnimations(UObject* WorldContextObject, UParticleSystemComponent* ParticleSystemComp) {
}

void AFortFXManager::RemoveMIDAnimations(UObject* WorldContextObject, UMaterialInstanceDynamic* Mid) {
}

void AFortFXManager::RemoveLightAnimations(UObject* WorldContextObject, ULightComponent* LightComp) {
}

UMaterialInstanceDynamic* AFortFXManager::GetPickupStretchMIDFromPool(AFortPickupEffect* PickupObject, UMaterialInterface* SourceMaterial, UPrimitiveComponent* Component, int32 ElementIndex, bool& bNeedsToBeInitialized) {
    return NULL;
}

UMaterialInstanceDynamic* AFortFXManager::GetPickupRarityMID(AFortPickupEffect* PickupObject, UPrimitiveComponent* Component, int32 ElementIndex, int32 Rarity, bool& bNeedsToBeInitialized) {
    return NULL;
}

UMaterialInstanceDynamic* AFortFXManager::GetGenericPooledMID_AssumeParametersUnitialized(UObject* WorldContextObject, UMaterialInterface* Material, int32 DesiredBatchCreateSize) {
    return NULL;
}

void AFortFXManager::AddSplineMeshSnapAnimation(UObject* WorldContextObject, const TArray<USplineMeshComponent*>& SplineMeshes, USplineComponent* TargetSpline, UCurveFloat* GrowthCurve, float Duration, bool bPlayGrowthReverse) {
}

void AFortFXManager::AddSplineMeshScaleAnimation(UObject* WorldContextObject, USplineMeshComponent* SplineMesh, float StartScaleStart, float StartScaleEnd, float EndScaleStart, float EndScaleEnd, UCurveFloat* LerpCurve, bool bOneMinusLerpValue, float Duration, bool bPlayReverse) {
}

void AFortFXManager::AddParticleAnimationFloat(UObject* WorldContextObject, UParticleSystemComponent* ParticleSystemComp, FName ParamName, float StartValue, float EndValue, UCurveFloat* LerpCurve, bool bOneMinusLerpValue, float Duration, bool bPlayReverse) {
}

void AFortFXManager::AddMIDAnimationFloat(UObject* WorldContextObject, UMaterialInstanceDynamic* Mid, FName ParamName, float StartValue, float EndValue, UCurveFloat* LerpCurve, bool bOneMinusLerpValue, float Duration, bool bPlayReverse) {
}

void AFortFXManager::AddMIDAnimationColorCurve(UObject* WorldContextObject, UMaterialInstanceDynamic* Mid, FName ParamName, UCurveLinearColor* ColorCurve, float Duration, bool bPlayReverse) {
}

void AFortFXManager::AddMIDAnimationColor(UObject* WorldContextObject, UMaterialInstanceDynamic* Mid, FName ParamName, const FLinearColor& StartValue, const FLinearColor& EndValue, UCurveFloat* LerpCurve, bool bOneMinusLerpValue, float Duration, bool bPlayReverse) {
}

void AFortFXManager::AddLightAnimationIntensity(UObject* WorldContextObject, ULightComponent* LightComp, float StartValue, float EndValue, UCurveFloat* LerpCurve, bool bOneMinusLerpValue, float Duration, bool bPlayReverse) {
}

AFortFXManager::AFortFXManager() {
}

