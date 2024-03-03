#pragma once
#include "CoreMinimal.h"
#include "EPegasusTimelineCategories.generated.h"

UENUM(BlueprintType)
enum class EPegasusTimelineCategories : uint8 {
    Unassigned,
    Player,
    Combat,
    Building,
    Inventory,
    Social,
    Resources,
};

