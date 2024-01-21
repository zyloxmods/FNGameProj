#pragma once
#include "CoreMinimal.h"
#include "EAthenaQuickChatFilteringType.generated.h"

UENUM(BlueprintType)
enum class EAthenaQuickChatFilteringType : uint8 {
    AlwaysVisible,
    ActiveMaterial,
    FacingPickup,
    ActiveHotbarItem,
    ActiveHotbarItemAmmo,
    FacingPickupOrActiveHotbarItem,
    NoWeaponEquippedRequiringAmmo,
    WeaponEquippedOfAmmoType,
};

