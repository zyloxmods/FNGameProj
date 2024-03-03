#pragma once
#include "CoreMinimal.h"
#include "FortDeliveryInfoRequirementsFilter.h"
#include "GameplayEffectApplicationInfo.h"
#include "FortGameplayEffectDeliveryInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortGameplayEffectDeliveryInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDeliveryInfoRequirementsFilter DeliveryRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayEffectApplicationInfo> GameplayEffects;
    
public:
    FORTNITEGAME_API FFortGameplayEffectDeliveryInfo();
};

