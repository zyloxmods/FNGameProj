#pragma once
#include "CoreMinimal.h"
#include "EFortPickupSpawnSource.generated.h"

UENUM(BlueprintType)
enum class EFortPickupSpawnSource : uint8 {
    Unset,
    PlayerElimination,
    Chest,
    SupplyDrop,
    AmmoBox,
    Drone,
    ItemSpawner,
};

