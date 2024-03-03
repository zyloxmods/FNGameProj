#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OverrideTablePair.h"
#include "FortOverrideDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFortOverrideDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverrideTablePair> OverrideTableList;
    
    FORTNITEGAME_API FFortOverrideDataTableRow();
};

