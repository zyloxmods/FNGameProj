#pragma once
#include "CoreMinimal.h"
#include "FortPointOnCurveRange.h"
#include "FortPointsOnCurve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FFortPointsOnCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPointOnCurveRange> RangesForPointsOnCurve;
    
    FORTNITEGAME_API FFortPointsOnCurve();
};

