#pragma once
#include "CoreMinimal.h"
#include "EMinigameActivityComponentValidityResult.generated.h"

UENUM(BlueprintType)
enum class EMinigameActivityComponentValidityResult : uint8 {
    Valid,
    IsNotValid,
};

