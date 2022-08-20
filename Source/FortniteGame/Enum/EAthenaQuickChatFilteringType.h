#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaQuickChatFilteringType : uint8 
{
	ActiveMaterial,
	FacingPickup,
	ActiveHotbarItem,
	ActiveHotbarItemAmmo,
	FacingPickupOrActiveHotbarItem,
	NoWeaponEquippedRequiringAmmo,
	WeaponEquippedOfAmmoType,
	EAthenaQuickChatFilteringType_MAX,
};
