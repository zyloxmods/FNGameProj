#pragma once
#include "CoreMinimal.h"
#include "EConversationRequirementResult.generated.h"

UENUM(BlueprintType)
enum class EConversationRequirementResult : uint8 {
    Passed,
    FailedButVisible,
    FailedAndHidden,
};

