#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortReplenishmentType : uint8 
{
	ClampMin,
	Add,
	Ability,
	EFortReplenishmentType_MAX,
};
