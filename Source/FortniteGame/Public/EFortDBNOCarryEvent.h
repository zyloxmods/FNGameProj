#pragma once
#include "CoreMinimal.h"
#include "EFortDBNOCarryEvent.generated.h"

UENUM(BlueprintType)
enum class EFortDBNOCarryEvent : uint8 {
    PickedUp,
    Interrogating,
    Dropped,
    Thrown,
};

