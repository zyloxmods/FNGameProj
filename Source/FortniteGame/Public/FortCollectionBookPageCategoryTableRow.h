#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortCollectionBookPageCategoryTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFortCollectionBookPageCategoryTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortPriority;
    
    FORTNITEGAME_API FFortCollectionBookPageCategoryTableRow();
};

