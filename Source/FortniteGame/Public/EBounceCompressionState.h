#pragma once
#include "CoreMinimal.h"
#include "EBounceCompressionState.generated.h"

UENUM(BlueprintType)
enum class EBounceCompressionState : uint8 {
    None,
    Crouching,
    Crouched,
    Jumping,
    Recoiling,
};

