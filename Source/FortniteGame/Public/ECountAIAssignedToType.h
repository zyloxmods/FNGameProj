#pragma once
#include "CoreMinimal.h"
#include "ECountAIAssignedToType.generated.h"

UENUM(BlueprintType)
enum class ECountAIAssignedToType : uint8 {
    Goal,
    Actor,
    Assignment,
};

