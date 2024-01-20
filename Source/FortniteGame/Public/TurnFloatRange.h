#pragma once
#include "CoreMinimal.h"
#include "TurnFloatRange.generated.h"

USTRUCT(BlueprintType)
struct FTurnFloatRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    FORTNITEGAME_API FTurnFloatRange();
};

