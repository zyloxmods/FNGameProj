#pragma once
#include "CoreMinimal.h"
#include "EFortGlobalAction.generated.h"

UENUM(BlueprintType)
enum class EFortGlobalAction : uint8 {
    TrapConfirm,
    TrapPicker,
    BuildConfirm,
    PerformBuildingEditInteraction,
    PerformBuildingImprovementInteraction,
    SwitchQuickBar,
    Use,
    Reload,
    InventoryOrChatHold,
    GamepadChangeMaterialOrHarvestHold,
    GamepadNextWeaponOrHarvestHold,
    GamepadNextWeaponOrAltInteractOrHarvestHold,
    ChangeMaterial,
    Fire,
    RotatePrimitiveClockwise,
    Gadget1,
    Gadget2,
    Ability1,
    Ability2,
    Ability3,
    ToggleFullScreenMap,
    ToggleInventory,
    Jump,
    Crouch,
    ShoppingCartCoast,
    GolfCartEBrake,
    GolfCartForward,
    GolfCartReverse,
    GolfCartHonk,
    GamepadToggleHarvestOrHoldCreativePhone,
    GamepadToggleCreativePhoneWeapon,
    Count,
};

