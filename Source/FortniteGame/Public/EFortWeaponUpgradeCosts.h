#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponUpgradeCosts.generated.h"

UENUM(BlueprintType)
enum class EFortWeaponUpgradeCosts : uint8 {
    NotSet,
    WoodUncommon,
    WoodRare,
    WoodVeryRare,
    WoodSuperRare,
    MetalUncommon,
    MetalRare,
    MetalVeryRare,
    MetalSuperRare,
    BrickUncommon,
    BrickRare,
    BrickVeryRare,
    BrickSuperRare,
    HorizontalWoodCommon,
    HorizontalWoodUncommon,
    HorizontalWoodRare,
    HorizontalWoodVeryRare,
    HorizontalWoodSuperRare,
    HorizontalMetalCommon,
    HorizontalMetalUncommon,
    HorizontalMetalRare,
    HorizontalMetalVeryRare,
    HorizontalMetalSuperRare,
    HorizontalBrickCommon,
    HorizontalBrickUncommon,
    HorizontalBrickRare,
    HorizontalBrickVeryRare,
    HorizontalBrickSuperRare,
};

