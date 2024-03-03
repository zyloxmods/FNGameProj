#pragma once
#include "CoreMinimal.h"
#include "EMontageInterrupt.generated.h"

UENUM(BlueprintType)
namespace EMontageInterrupt {
    enum Type {
        Any,
        RootMotionOnly,
        None,
    };
}

