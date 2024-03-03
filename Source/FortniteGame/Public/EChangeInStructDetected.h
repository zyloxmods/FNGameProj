#pragma once
#include "CoreMinimal.h"
#include "EChangeInStructDetected.generated.h"

UENUM(BlueprintType)
enum class EChangeInStructDetected : uint8 {
    Dirty,
    Clean,
};

