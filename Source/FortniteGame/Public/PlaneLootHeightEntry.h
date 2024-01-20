#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PlaneLootEntry.h"
#include "PlaneLootHeightEntry.generated.h"

USTRUCT(BlueprintType)
struct FPlaneLootHeightEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RelativeWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinHeightOffGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxHeightOffGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaneLootEntry> LootEntries;
    
    FORTNITEGAME_API FPlaneLootHeightEntry();
};

