#pragma once
#include "CoreMinimal.h"
#include "EMusicFadeStyles.generated.h"

UENUM(BlueprintType)
namespace EMusicFadeStyles {
    enum Type {
        CrossFade,
        FadeOutThenIn,
        Max_None,
    };
}

