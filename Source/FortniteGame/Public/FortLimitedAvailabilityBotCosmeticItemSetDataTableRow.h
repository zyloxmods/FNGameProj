#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortBotCosmeticItemSetDataTableRow.h"
#include "FortLimitedAvailabilityBotCosmeticItemSetDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFortLimitedAvailabilityBotCosmeticItemSetDataTableRow : public FFortBotCosmeticItemSetDataTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EndDate;
    
    FORTNITEGAME_API FFortLimitedAvailabilityBotCosmeticItemSetDataTableRow();
};

