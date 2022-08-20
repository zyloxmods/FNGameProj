#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EColorBlindMode : uint8 
{
	Deuteranope,
	Protanope,
	Tritanope,
	EColorBlindMode_MAX,
};
