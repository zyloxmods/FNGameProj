#pragma once
#include "CoreMinimal.h"
#include "EFortBuffState.generated.h"

UENUM(BlueprintType)
enum class EFortBuffState : uint8 {
    NoChange,
    Better,
    Worse,
};

