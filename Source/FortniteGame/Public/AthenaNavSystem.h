#pragma once
#include "CoreMinimal.h"
#include "BoxNavInvoker.h"
#include "FortNavSystem.h"
#include "NavDataSetVariantSettings.h"
#include "OnNavGenerationFinishedDelegate.h"
#include "AthenaNavSystem.generated.h"

class AAthenaNavOctTreeInclusionBounds;
class UObject;
class USceneComponent;

UCLASS(Blueprintable, NonTransient)
class UAthenaNavSystem : public UFortNavSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavDataSetVariantSettings> NavDataSetVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseNavDataSetVariants: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseBuildingGridAsNavigableSpace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMarkBuildingFoundationDirty: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSupportRuntimeNavmeshDisabling: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavGenerationObserverCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoxNavInvoker> BoxInvokers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAthenaNavOctTreeInclusionBounds*> NavOctTreeInclusionBounds;
    
public:
    UAthenaNavSystem();
    UFUNCTION(BlueprintCallable)
    static void UnregisterNavGenerationObserver(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterNavGenerationObserver(USceneComponent* Component, FOnNavGenerationFinished Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInitialNavigationLockActive(UObject* WorldContextObject);
    
};

