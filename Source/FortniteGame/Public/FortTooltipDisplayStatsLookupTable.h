#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortTooltipDisplayInfo.h"
#include "FortTooltipDisplayStatsLookupTable.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortTooltipDisplayStatsLookupTable : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTooltipDisplayInfo> TooltipDisplayStats;
    
public:
    UFortTooltipDisplayStatsLookupTable();
};

