#pragma once
#include "CoreMinimal.h"
#include "FortFXAnimationInfoBase.h"
#include "FortLinearColorCurveAnimationInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortLinearColorCurveAnimationInfo : public FFortFXAnimationInfoBase {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortLinearColorCurveAnimationInfo();
};

