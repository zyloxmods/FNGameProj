#pragma once
#include "CoreMinimal.h"
#include "EFortPickupSourceTypeFlag.generated.h"

UENUM(BlueprintType)
enum class EFortPickupSourceTypeFlag : uint8 {
    Other,
    Player,
    Destruction,
    Container = 0x4,
    AI = 0x8,
    Tossed = 0x10,
    FloorLoot = 0x20,
    Fishing = 0x40,
};

