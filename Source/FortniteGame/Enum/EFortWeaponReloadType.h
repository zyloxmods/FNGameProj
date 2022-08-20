#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortWeaponReloadType : uint8 
{
	ReloadIndividualBullets,
	ReloadBasedOnAmmoCostPerFire,
	ReloadBasedOnCartridgePerFire,
	EFortWeaponReloadType_MAX,
};
