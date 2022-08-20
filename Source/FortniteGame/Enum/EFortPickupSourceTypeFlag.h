#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPickupSourceTypeFlag : uint8 
{
	Player,
	Destruction,
	Container,
	AI,
	Tossed,
	FloorLoot,
	Fishing,
	EFortPickupSourceTypeFlag_MAX,
};
