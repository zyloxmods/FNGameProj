#pragma once
#include "CoreMinimal.h"
#include "FortCreativeBudgetPickupInstanceLimit.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FFortCreativeBudgetPickupInstanceLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfInstances;
    
    FORTNITEGAME_API FFortCreativeBudgetPickupInstanceLimit();
};

