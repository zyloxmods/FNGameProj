#pragma once
#include "CoreMinimal.h"
#include "EItemInteractionType.generated.h"

UENUM(BlueprintType)
enum class EItemInteractionType : uint8 {
    Search,
    LockOnSearch,
    None,
};

