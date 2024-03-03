#pragma once
#include "CoreMinimal.h"
#include "FortFXAnimationInfoBase.h"
#include "FortSplineMeshScaleAnimationInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortSplineMeshScaleAnimationInfo : public FFortFXAnimationInfoBase {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortSplineMeshScaleAnimationInfo();
};

