#pragma once
#include "CoreMinimal.h"
#include "EContextualEvent.generated.h"

UENUM(BlueprintType)
enum class EContextualEvent : uint8 {
    Generic,
    Location,
    InventoryAdded,
    InventoryRemoved,
    StartSkydiving,
    NewQuests,
};

