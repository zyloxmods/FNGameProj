#pragma once
#include "CoreMinimal.h"
#include "BoxNavInvoker.h"
#include "FortNavSystem.h"
#include "OnNavGenerationFinishedDelegate.h"
#include "AthenaNavSystem.generated.h"

class AAthenaNavOctTreeExclusionBounds;
class USceneComponent;

UCLASS(Blueprintable, NonTransient)
class UAthenaNavSystem : public UFortNavSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseBuildingGridAsNavigableSpace: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavGenerationObserverCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoxNavInvoker> BoxInvokers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAthenaNavOctTreeExclusionBounds* NavOctTreeExclusionBounds;
    
public:
    UAthenaNavSystem();
    UFUNCTION(BlueprintCallable)
    static void UnregisterNavGenerationObserver(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterNavGenerationObserver(USceneComponent* Component, FOnNavGenerationFinished Event);
    
};

