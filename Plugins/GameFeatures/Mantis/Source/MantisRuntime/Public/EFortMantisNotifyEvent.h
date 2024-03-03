#pragma once
#include "CoreMinimal.h"
#include "EFortMantisNotifyEvent.generated.h"

UENUM(BlueprintType)
enum class EFortMantisNotifyEvent : uint8 {
    Invalid,
    Branch,
};

