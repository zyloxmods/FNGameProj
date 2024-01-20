#pragma once
#include "CoreMinimal.h"
#include "EFortInputActionGroup.generated.h"

UENUM(BlueprintType)
enum class EFortInputActionGroup : uint8 {
    AllModes,
    Combat,
    Building,
    Movement,
    Edit,
    Death,
    Cinematic,
    Picker,
    Other,
    Vehicle,
    ShoppingCart,
    GolfCart,
    QuadCrasher,
    Biplane,
    Jackal,
    Hamsterball,
    ShipCannon,
    Spectating,
    FullscreenMap,
    CreativeAll,
    CreativeMoveToolEquipped,
    CreativeMoveObjectsFreely,
    CreativeMoveBuildingsOnGrid,
    CreativeFlying,
    CreativeIslandPanel,
    CombatAndBuilding,
};

