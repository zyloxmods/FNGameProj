#pragma once
#include "CoreMinimal.h"
#include "TurnFloatRange.generated.h"

USTRUCT(BlueprintType)
struct FTurnFloatRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float max;
    
    FORTNITEGAME_API FTurnFloatRange();
};

