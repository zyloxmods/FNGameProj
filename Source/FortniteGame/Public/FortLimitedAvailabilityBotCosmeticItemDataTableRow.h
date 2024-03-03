#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortBotCosmeticItemDataTableRow.h"
#include "FortLimitedAvailabilityBotCosmeticItemDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFortLimitedAvailabilityBotCosmeticItemDataTableRow : public FFortBotCosmeticItemDataTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EndDate;
    
    FORTNITEGAME_API FFortLimitedAvailabilityBotCosmeticItemDataTableRow();
};

