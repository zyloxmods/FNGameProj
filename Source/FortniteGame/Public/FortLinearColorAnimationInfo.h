#pragma once
#include "CoreMinimal.h"
#include "FortFXAnimationInfoBase.h"
#include "FortLinearColorAnimationInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortLinearColorAnimationInfo : public FFortFXAnimationInfoBase {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortLinearColorAnimationInfo();
};

