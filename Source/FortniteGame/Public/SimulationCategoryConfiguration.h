#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCreativeBudgetClassInstanceLimit.h"
#include "SimulationCategoryConfiguration.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class USimulationCategoryConfiguration : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeBudgetClassInstanceLimit> SavedClassLimits;
    
    USimulationCategoryConfiguration();
};

