#pragma once
#include "CoreMinimal.h"
#include "FortCreativeBudgetClassInstanceLimit.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFortCreativeBudgetClassInstanceLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfInstances;
    
    FORTNITEGAME_API FFortCreativeBudgetClassInstanceLimit();
};

