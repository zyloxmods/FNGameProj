#pragma once
#include "CoreMinimal.h"
#include "ECreativeVendingMachineState.generated.h"

UENUM(BlueprintType)
enum class ECreativeVendingMachineState : uint8 {
    DisplayingItem,
    AcceptingItem,
    AcceptedItem,
    RejectedItem,
};

