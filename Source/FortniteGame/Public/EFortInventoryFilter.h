#pragma once
#include "CoreMinimal.h"
#include "EFortInventoryFilter.generated.h"

UENUM(BlueprintType)
enum class EFortInventoryFilter : uint8 {
    WeaponMelee,
    WeaponRanged,
    Ammo,
    Traps,
    Consumables,
    Ingredients,
    Gadget,
    Decorations,
    Badges,
    Heroes,
    LeadSurvivors,
    Survivors,
    Defenders,
    Resources,
    ConversionControl,
    AthenaCosmetics,
    Playset,
    CreativePlot,
    TeamPerk,
    Workers,
    Invisible,
    Max_None,
};

