#pragma once
#include "CoreMinimal.h"
#include "ECustomLootSelection.generated.h"

UENUM(BlueprintType)
enum class ECustomLootSelection : uint8 {
    Default,
    HighExplosives,
    CloseEncounters,
    SolidGold,
    WildWest,
    SniperShootout,
    OneShot,
};

