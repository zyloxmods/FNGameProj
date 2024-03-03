#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnThrottleCompleteDelegate.h"
#include "FortCreativeGeneralThrottleManager.generated.h"

UCLASS(Blueprintable)
class UFortCreativeGeneralThrottleManager : public UObject {
    GENERATED_BODY()
public:
    UFortCreativeGeneralThrottleManager();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    void RequestThrottleObject(UObject* InWorldContextObject, UObject* InThrottleObject, int32 InThrottleBucketID, FOnThrottleComplete InThrottleCompleteFunction);
    
};

