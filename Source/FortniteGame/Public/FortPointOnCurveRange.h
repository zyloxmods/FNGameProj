#pragma once
#include "CoreMinimal.h"
#include "FortPointOnCurveRange.generated.h"

USTRUCT(BlueprintType)
struct FFortPointOnCurveRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPercentage;
    
    FORTNITEGAME_API FFortPointOnCurveRange();
};

