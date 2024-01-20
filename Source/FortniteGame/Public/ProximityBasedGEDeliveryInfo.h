#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectApplicationInfo.h"
#include "ProximityBasedGEDeliveryInfoBase.h"
#include "ProximityBasedGEDeliveryInfo.generated.h"

USTRUCT(BlueprintType)
struct FProximityBasedGEDeliveryInfo : public FProximityBasedGEDeliveryInfoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayEffectApplicationInfo> EffectsToApply;
    
public:
    FORTNITEGAME_API FProximityBasedGEDeliveryInfo();
};

