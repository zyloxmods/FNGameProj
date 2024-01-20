#pragma once
#include "CoreMinimal.h"
#include "AIHotSpotManagerProxy.h"
#include "AutoAcquireSlot.h"
#include "FortAIHotSpotManager.generated.h"

class UBuildingActorHotSpotConfig;

UCLASS(Blueprintable)
class UFortAIHotSpotManager : public UAIHotSpotManagerProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBuildingActorHotSpotConfig> FallbackHotspotConfig;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAutoAcquireSlot> AutoAcquireSlots;
    
public:
    UFortAIHotSpotManager();
};

