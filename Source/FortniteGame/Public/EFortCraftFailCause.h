#pragma once
#include "CoreMinimal.h"
#include "EFortCraftFailCause.generated.h"

UENUM(BlueprintType)
enum class EFortCraftFailCause : uint8 {
    Unknown,
    NotEnoughResources,
    InventoryFull,
    InsufficientTeamLevel,
    CraftingQueueFull,
    CurrentlyLocked,
    OverflowSchematic,
};

