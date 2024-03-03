#pragma once
#include "CoreMinimal.h"
#include "EPostGameScreenContinueBehavior.generated.h"

UENUM(BlueprintType)
enum class EPostGameScreenContinueBehavior : uint8 {
    Next,
    Previous,
};

