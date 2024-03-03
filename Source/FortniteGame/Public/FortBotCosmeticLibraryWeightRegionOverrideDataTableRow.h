#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AttributeSet.h"
#include "FortBotCosmeticLibraryWeightRegionOverrideDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFortBotCosmeticLibraryWeightRegionOverrideDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RegionWeights;
    
    FORTNITEGAME_API FFortBotCosmeticLibraryWeightRegionOverrideDataTableRow();
};

