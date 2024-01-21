#pragma once
#include "CoreMinimal.h"
#include "FortTooltipDisplayStatInfo.h"
#include "FortTooltipDisplayStatsCategory.generated.h"

USTRUCT(BlueprintType)
struct FFortTooltipDisplayStatsCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTooltipDisplayStatInfo> TooltipStats;
    
    FORTNITEGAME_API FFortTooltipDisplayStatsCategory();
};

