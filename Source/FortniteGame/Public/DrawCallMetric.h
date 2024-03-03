#pragma once
#include "CoreMinimal.h"
#include "ObjectMetric_Legacy.h"
#include "DrawCallMetric.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class UDrawCallMetric : public UObjectMetric_Legacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TotalNumberOfDrawCalls;
    
public:
    UDrawCallMetric();
};

