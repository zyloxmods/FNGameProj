#pragma once
#include "CoreMinimal.h"
#include "ObjectMetric_Legacy.h"
#include "VersionedBudget.h"
#include "CategoryMetric.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class UCategoryMetric : public UObjectMetric_Legacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObjectMetric_Legacy*> Metrics;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVersionedBudget> VersionedBudgets;
    
public:
    UCategoryMetric();
};

