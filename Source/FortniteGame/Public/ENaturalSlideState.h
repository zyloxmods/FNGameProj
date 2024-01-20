#pragma once
#include "CoreMinimal.h"
#include "ENaturalSlideState.generated.h"

UENUM(BlueprintType)
enum class ENaturalSlideState : uint8 {
    None,
    Entering,
    InProgress,
    Exiting,
};

