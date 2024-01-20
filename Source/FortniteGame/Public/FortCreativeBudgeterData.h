#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCreativeBudgetClassInstanceLimit.h"
#include "FortCreativeBudgetOverride.h"
#include "FortCreativeBudgeterData.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class UFortCreativeBudgeterData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeBudgetOverride> CostOverrides;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeBudgetClassInstanceLimit> TransientClassLimits;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeBudgetClassInstanceLimit> SavedClassLimits;
    
    UFortCreativeBudgeterData();
};

