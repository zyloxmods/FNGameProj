#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortWeaponOverheatState : uint8 
{
	Heating,
	Cooling,
	Overheated,
	EFortWeaponOverheatState_MAX,
};
