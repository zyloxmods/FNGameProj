#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CurieContainerHandle.h"
#include "CurieInteractHandle.h"
#include "CurieInteractParamsHandle.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "FortCurieBlueprintFunctionLibrary.generated.h"

class AActor;
class UFortCurieComponent;
class UFortCurieManager;
class UObject;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class UFortCurieBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortCurieBlueprintFunctionLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RemoveElectricLink(UObject* WorldContextObject, AActor* FirstLinkActor, AActor* SecondLinkActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCurieEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCurieActive(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void IgniteGrassInBounds(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, FBox IgnitionBounds, int32 PropagationFuel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasElementAttached(UObject* WorldContextObject, const FCurieContainerHandle& CurieContainerHandle, FGameplayTag ElementTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasCurieStateAttached(AActor* Actor, FGameplayTag StateIdentifier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void GetInstigatorInfoFromInteractParams(const FCurieInteractParamsHandle& InteractParamsHandle, AActor*& Instigator, AActor*& EffectCauser);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetInstigatorInfoForAttachedElement(UObject* WorldContextObject, const FCurieContainerHandle& CurieContainerHandle, FGameplayTag ElementTag, AActor*& Instigator, AActor*& EffectCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFortCurieManager* GetCurieManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFortCurieComponent* GetCurieComponentFromActor(AActor* Actor, bool bCreateIfNecessary);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExtinguishGrassInBounds(UObject* WorldContextObject, FBox IgnitionBounds);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExecuteWaterApplication(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, float LandscapeExtinguishRadius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExecuteFireApplication(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, int32 PropagationFuel, float LandscapeIgnitionRadius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ExecuteEndWaterInteract(UObject* WorldContextObject, AActor* Target, FCurieInteractHandle InteractHandle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ExecuteEndFireInteract(UObject* WorldContextObject, AActor* Target, FCurieInteractHandle InteractHandle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ExecuteEndElectricityInteract(UObject* WorldContextObject, AActor* Target, FCurieInteractHandle InteractHandle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExecuteElectricityApplication(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, int32 PropagationDepthLimit);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FCurieInteractHandle ExecuteBeginWaterInteract(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, float LandscapeExtinguishRadius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FCurieInteractHandle ExecuteBeginFireInteract(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, int32 PropagationFuel, float LandscapeIgnitionRadius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FCurieInteractHandle ExecuteBeginElectricityInteract(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, int32 PropagationDepthLimit);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void EnablePermanentElementSourceOnActor(AActor* TargetActor, FGameplayTag ElementTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void EnableElementAttachmentOnActor(AActor* TargetActor, FGameplayTag ElementTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void DisablePermanentElementSourceOnActor(AActor* TargetActor, FGameplayTag ElementTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void DisableElementAttachmentOnActor(AActor* TargetActor, FGameplayTag ElementTag);
    
    UFUNCTION(BlueprintCallable)
    static void CurieProtoMeshExtraction(TArray<FVector>& LocalVertLocs, UStaticMeshComponent* MeshComponent, int32 LOD, int32 VertDivisor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddElectricLink(UObject* WorldContextObject, AActor* FirstLinkActor, AActor* SecondLinkActor);
    
};

