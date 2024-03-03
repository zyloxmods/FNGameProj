#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CosmeticFilterTagDataRow.generated.h"

USTRUCT(BlueprintType)
struct FCosmeticFilterTagDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> SearchQueries;
    
    FORTNITEGAME_API FCosmeticFilterTagDataRow();
};

