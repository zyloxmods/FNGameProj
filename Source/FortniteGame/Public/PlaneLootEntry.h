#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PlaneLootEntry.generated.h"

USTRUCT(BlueprintType)
struct FPlaneLootEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LootTableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LootWeight;
    
    FORTNITEGAME_API FPlaneLootEntry();
};

