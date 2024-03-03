#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectApplicationInfoHard.h"
#include "ProximityBasedGEDeliveryInfoBase.h"
#include "ProximityBasedGEDeliveryInfoHard.generated.h"

USTRUCT(BlueprintType)
struct FProximityBasedGEDeliveryInfoHard : public FProximityBasedGEDeliveryInfoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayEffectApplicationInfoHard> EffectsToApply;
    
public:
    FORTNITEGAME_API FProximityBasedGEDeliveryInfoHard();
};

