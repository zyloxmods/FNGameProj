#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortClientOnlyActor.h"
#include "FortLightAnimSet.h"
#include "FortMIDAnimSet.h"
#include "FortParticleAnimSet.h"
#include "FortSplineMeshAnimSet.h"
#include "Templates/SubclassOf.h"
#include "FortFXManager.generated.h"

class AActor;
class AFortPickupEffect;
class AFortWeaponRanged;
class UCurveFloat;
class UCurveLinearColor;
class ULightComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class UParticleSystemComponent;
class UPrimitiveComponent;
class USplineComponent;
class USplineMeshComponent;

UCLASS(Blueprintable)
class AFortFXManager : public AFortClientOnlyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortSplineMeshAnimSet> SplineAnimSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortMIDAnimSet> MIDAnimSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortParticleAnimSet> ParticleAnimSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortLightAnimSet> LightAnimSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortWeaponRanged*> PendingWeaponFX;
    
public:
    AFortFXManager();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnPooledFXActor(UObject* WorldContextObject, TSubclassOf<AActor> FXActorClass, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShrinkGenericMIDPoolToSize(UObject* WorldContextObject, UMaterialInterface* Material, int32 DesiredNewSize);
    
    UFUNCTION(BlueprintCallable)
    static void ReturnPickupStretchMIDToPool(AFortPickupEffect* PickupObject, UPrimitiveComponent* Component, int32 ElementIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReturnGenericPooledMID(UObject* WorldContextObject, UMaterialInterface* Material, UMaterialInstanceDynamic* UsedMID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReturnFXActorToPool(UObject* WorldContextObject, AActor* FXActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveSplineMeshAnimations(UObject* WorldContextObject, USplineMeshComponent* SplineMesh);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveParticleAnimations(UObject* WorldContextObject, UParticleSystemComponent* ParticleSystemComp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveMIDAnimations(UObject* WorldContextObject, UMaterialInstanceDynamic* Mid);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveLightAnimations(UObject* WorldContextObject, ULightComponent* LightComp);
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInstanceDynamic* GetPickupStretchMIDFromPool(AFortPickupEffect* PickupObject, UMaterialInterface* SourceMaterial, UPrimitiveComponent* Component, int32 ElementIndex, bool& bNeedsToBeInitialized);
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInstanceDynamic* GetPickupRarityMID(AFortPickupEffect* PickupObject, UPrimitiveComponent* Component, int32 ElementIndex, int32 Rarity, bool& bNeedsToBeInitialized);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMaterialInstanceDynamic* GetGenericPooledMID_AssumeParametersUnitialized(UObject* WorldContextObject, UMaterialInterface* Material, int32 DesiredBatchCreateSize);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddSplineMeshSnapAnimation(UObject* WorldContextObject, const TArray<USplineMeshComponent*>& SplineMeshes, USplineComponent* TargetSpline, UCurveFloat* GrowthCurve, float Duration, bool bPlayGrowthReverse);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddSplineMeshScaleAnimation(UObject* WorldContextObject, USplineMeshComponent* SplineMesh, float StartScaleStart, float StartScaleEnd, float EndScaleStart, float EndScaleEnd, UCurveFloat* LerpCurve, bool bOneMinusLerpValue, float Duration, bool bPlayReverse);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddParticleAnimationFloat(UObject* WorldContextObject, UParticleSystemComponent* ParticleSystemComp, FName ParamName, float StartValue, float EndValue, UCurveFloat* LerpCurve, bool bOneMinusLerpValue, float Duration, bool bPlayReverse);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddMIDAnimationFloat(UObject* WorldContextObject, UMaterialInstanceDynamic* Mid, FName ParamName, float StartValue, float EndValue, UCurveFloat* LerpCurve, bool bOneMinusLerpValue, float Duration, bool bPlayReverse);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddMIDAnimationColorCurve(UObject* WorldContextObject, UMaterialInstanceDynamic* Mid, FName ParamName, UCurveLinearColor* ColorCurve, float Duration, bool bPlayReverse);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddMIDAnimationColor(UObject* WorldContextObject, UMaterialInstanceDynamic* Mid, FName ParamName, const FLinearColor& StartValue, const FLinearColor& EndValue, UCurveFloat* LerpCurve, bool bOneMinusLerpValue, float Duration, bool bPlayReverse);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddLightAnimationIntensity(UObject* WorldContextObject, ULightComponent* LightComp, float StartValue, float EndValue, UCurveFloat* LerpCurve, bool bOneMinusLerpValue, float Duration, bool bPlayReverse);
    
};

