#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortDefenderSubtype : uint8 
{
	Pistol,
	Melee,
	Sniper,
	Shotgun,
	Invalid,
	EFortDefenderSubtype_MAX,
};
