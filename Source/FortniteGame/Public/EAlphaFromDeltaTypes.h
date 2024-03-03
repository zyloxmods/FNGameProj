#pragma once
#include "CoreMinimal.h"
#include "EAlphaFromDeltaTypes.generated.h"

UENUM(BlueprintType)
namespace EAlphaFromDeltaTypes {
    enum Type {
        TranslationX,
        TranslationY,
        TranslationZ,
        Scale,
        ScaleX,
        ScaleY,
        ScaleZ,
        EulerX,
        EulerY,
        EulerZ,
        QuaternionTwist,
    };
}

