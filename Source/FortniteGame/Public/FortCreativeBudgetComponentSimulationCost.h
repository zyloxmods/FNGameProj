#pragma once
#include "CoreMinimal.h"
#include "FortCreativeBudgetComponentSimulationCost.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FFortCreativeBudgetComponentSimulationCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UActorComponent> ComponentClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SimulationCost;
    
    FORTNITEGAME_API FFortCreativeBudgetComponentSimulationCost();
};

