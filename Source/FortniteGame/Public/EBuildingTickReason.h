#pragma once
#include "CoreMinimal.h"
#include "EBuildingTickReason.generated.h"

UENUM(BlueprintType)
enum class EBuildingTickReason : uint8 {
    Dynamic,
    Damaged,
    GameplayCue_Damage,
    GameplayCue_Healing,
    GameplayCue_InstantDeath,
    UnderConstruction,
    UnderRepair,
    Editing,
    BuildingAnimation,
    DynamicLODAnim,
    DynamicShrinkAnim,
    AutoBuild,
    FullHealthEffect,
    BounceAnimation,
    DoorOpenStyleChanged,
    DoorOpenChanged,
    DoorInteract,
};

