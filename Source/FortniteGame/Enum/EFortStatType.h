#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortStatType : uint8 
{
	Offense,
	Resistance,
	Technology,
	Fortitude_Team,
	Offense_Team,
	Resistance_Team,
	Technology_Team,
	Invalid,
	EFortStatType_MAX,
};
