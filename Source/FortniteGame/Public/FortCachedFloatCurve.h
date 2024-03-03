#pragma once
#include "CoreMinimal.h"
#include "FortCachedFloatCurve.generated.h"

USTRUCT(BlueprintType)
struct FFortCachedFloatCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    FORTNITEGAME_API FFortCachedFloatCurve();
};

