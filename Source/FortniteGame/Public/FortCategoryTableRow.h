#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortCategoryTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFortCategoryTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortPriority;
    
    FORTNITEGAME_API FFortCategoryTableRow();
};

