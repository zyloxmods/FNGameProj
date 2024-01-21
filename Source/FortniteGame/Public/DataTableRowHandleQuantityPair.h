#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DataTableRowHandleQuantityPair.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FDataTableRowHandleQuantityPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DataTableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FDataTableRowHandleQuantityPair();
};

