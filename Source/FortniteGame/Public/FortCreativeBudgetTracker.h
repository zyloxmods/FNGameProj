#pragma once
#include "CoreMinimal.h"
#include "CreativeActorId.h"
#include "FortCreativeClassInstanceTracker.h"
#include "MemoryBudget.h"
#include "FortCreativeBudgetTracker.generated.h"

USTRUCT(BlueprintType)
struct FFortCreativeBudgetTracker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMemoryBudget GlobalBudget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreativeActorId> AssetInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCreativeClassInstanceTracker ClassTracker;
    
public:
    FORTNITEGAME_API FFortCreativeBudgetTracker();
};

