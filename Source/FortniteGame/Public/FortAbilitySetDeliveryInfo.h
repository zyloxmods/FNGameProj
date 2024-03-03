#pragma once
#include "CoreMinimal.h"
#include "FortDeliveryInfoRequirementsFilter.h"
#include "FortAbilitySetDeliveryInfo.generated.h"

class UFortAbilitySet;

USTRUCT(BlueprintType)
struct FFortAbilitySetDeliveryInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDeliveryInfoRequirementsFilter DeliveryRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortAbilitySet>> AbilitySets;
    
public:
    FORTNITEGAME_API FFortAbilitySetDeliveryInfo();
};

