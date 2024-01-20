#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EFortAbilityCostSource.h"
#include "FortAbilityCost.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FFortAbilityCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAbilityCostSource CostSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CostValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyApplyCostOnHit;
    
    FORTNITEGAME_API FFortAbilityCost();
};

