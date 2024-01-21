#pragma once
#include "CoreMinimal.h"
#include "FortDeliveryInfoRequirementsFilter.h"
#include "FortAbilitySetDeliveryInfo.generated.h"

class UFortAbilitySet;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortAbilitySetDeliveryInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDeliveryInfoRequirementsFilter DeliveryRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortAbilitySet>> AbilitySets;
    
public:
    FFortAbilitySetDeliveryInfo();
};

