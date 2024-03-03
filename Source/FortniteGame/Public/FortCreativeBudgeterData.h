#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCreativeBudget.h"
#include "FortCreativeBudgetClassInstanceLimit.h"
#include "FortCreativeBudgetComponentSimulationCost.h"
#include "FortCreativeBudgetOverride.h"
#include "FortCreativeBudgetPickupInstanceLimit.h"
#include "FortCreativeBudgetPlotBudgetOverride.h"
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
    TArray<FFortCreativeBudgetPickupInstanceLimit> TransientPickupLimits;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeBudgetClassInstanceLimit> SavedClassLimits;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeBudgetComponentSimulationCost> ComponentSimulationCosts;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeBudget> Budgets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeBudgetPlotBudgetOverride> PlotBudgetOverrides;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeBudget> BattleLabBudgets;
    
    UFortCreativeBudgeterData();
};

