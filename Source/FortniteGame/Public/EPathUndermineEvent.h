#pragma once
#include "CoreMinimal.h"
#include "EPathUndermineEvent.generated.h"

UENUM(BlueprintType)
enum class EPathUndermineEvent : uint8 {
    Predicted,
    Started,
    Finished,
};

