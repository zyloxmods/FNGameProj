#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MMRSpawningBracketBaseDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FMMRSpawningBracketBaseDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MMRBracketLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MMRBracketHigh;
    
    FORTNITEGAME_API FMMRSpawningBracketBaseDataTableRow();
};

