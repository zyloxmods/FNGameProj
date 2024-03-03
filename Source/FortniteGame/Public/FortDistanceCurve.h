#pragma once
#include "CoreMinimal.h"
#include "FortCachedFloatCurve.h"
#include "FortDistanceCurve.generated.h"

USTRUCT(BlueprintType)
struct FFortDistanceCurve : public FFortCachedFloatCurve {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortDistanceCurve();
};

