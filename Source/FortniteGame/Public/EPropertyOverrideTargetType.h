#pragma once
#include "CoreMinimal.h"
#include "EPropertyOverrideTargetType.generated.h"

UENUM(BlueprintType)
enum class EPropertyOverrideTargetType : uint8 {
    None,
    Default,
    ImmutableTarget,
};

