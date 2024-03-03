#pragma once
#include "CoreMinimal.h"
#include "EFortWeakPointState.generated.h"

UENUM(BlueprintType)
enum class EFortWeakPointState : uint8 {
    Uninitialized,
    Inactive,
    Active,
    Destroyed,
};

