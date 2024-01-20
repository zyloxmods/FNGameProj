#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortTooltipDisplayStatsCategory.h"
#include "FortTooltipDisplayStatsList.generated.h"

UCLASS(Blueprintable)
class UFortTooltipDisplayStatsList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTooltipDisplayStatsCategory> TooltipCategories;
    
    UFortTooltipDisplayStatsList();
};

