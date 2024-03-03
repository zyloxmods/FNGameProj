#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFortBudgetCategory.h"
#include "VersionedMetricWrapper.h"
#include "MetricConfiguration_Legacy.generated.h"

class UCategoryMetric;
class UObjectMetric_Legacy;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class FORTNITEGAME_API UMetricConfiguration_Legacy : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UCategoryMetric>> CategoryClasses;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVersionedMetricWrapper> MetricClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObjectMetric_Legacy*> Metrics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortBudgetCategory, UCategoryMetric*> CategoryToMetric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCategoryMetric*> CategoryMetrics;
    
public:
    UMetricConfiguration_Legacy();
};

