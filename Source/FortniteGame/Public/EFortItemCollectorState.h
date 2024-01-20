#pragma once
#include "CoreMinimal.h"
#include "EFortItemCollectorState.generated.h"

UENUM(BlueprintType)
enum class EFortItemCollectorState : uint8 {
    CanInteract,
    Active,
    Inactive,
    Captured,
    Invalid,
};

