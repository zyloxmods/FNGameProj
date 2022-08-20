#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortResourceLevel : uint8 
{
	Second,
	Third,
	Fourth,
	Fifth,
	Sixth,
	NumLevels,
	Invalid,
	EFortResourceLevel_MAX,
};
