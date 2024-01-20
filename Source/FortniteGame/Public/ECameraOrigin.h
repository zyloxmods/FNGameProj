#pragma once
#include "CoreMinimal.h"
#include "ECameraOrigin.generated.h"

UENUM(BlueprintType)
namespace ECameraOrigin {
    enum Type {
        ViewTargetTransform,
        BoneTransform,
    };
}

