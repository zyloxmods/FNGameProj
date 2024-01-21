#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "WorldItemAndMinMaxCount.generated.h"

class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FWorldItemAndMinMaxCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle MinCurveTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle MaxCurveTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* Item;
    
    FORTNITEGAME_API FWorldItemAndMinMaxCount();
};

