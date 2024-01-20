#pragma once
#include "CoreMinimal.h"
#include "FortDeliveryInfoRequirementsFilter.h"
#include "GameplayEffectApplicationInfo.h"
#include "FortGameplayEffectDeliveryInfo.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortGameplayEffectDeliveryInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDeliveryInfoRequirementsFilter DeliveryRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayEffectApplicationInfo> GameplayEffects;
    
public:
    FFortGameplayEffectDeliveryInfo();
};

