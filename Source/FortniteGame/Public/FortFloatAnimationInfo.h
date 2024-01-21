#pragma once
#include "CoreMinimal.h"
#include "FortFXAnimationInfoBase.h"
#include "FortFloatAnimationInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortFloatAnimationInfo : public FFortFXAnimationInfoBase {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortFloatAnimationInfo();
};

