#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RecipeDataTableRowHandleQuantityData.generated.h"

USTRUCT(BlueprintType)
struct FRecipeDataTableRowHandleQuantityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DataTableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConvertRemainderUp;
    
    FORTNITEGAME_API FRecipeDataTableRowHandleQuantityData();
};

