#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "QueryName.h"
#include "NamedWeightTableRow.generated.h"

USTRUCT(BlueprintType)
struct FNamedWeightTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQueryName QueryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FORTNITEGAME_API FNamedWeightTableRow();
};

