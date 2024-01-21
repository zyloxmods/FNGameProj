#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PlaneLootHeightEntry.h"
#include "PlaneLootTypeEntry.generated.h"

USTRUCT(BlueprintType)
struct FPlaneLootTypeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RelativeWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaneLootHeightEntry> LootHeightEntries;
    
    FORTNITEGAME_API FPlaneLootTypeEntry();
};

