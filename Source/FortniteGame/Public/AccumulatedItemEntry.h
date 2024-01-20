#pragma once
#include "CoreMinimal.h"
#include "AccumulatedItemEntry.generated.h"

class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FAccumulatedItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FORTNITEGAME_API FAccumulatedItemEntry();
};

