#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortGamepadSensitivity : uint8 
{
	Slow,
	SlowPlus,
	SlowPlusPlus,
	Normal,
	NormalPlus,
	NormalPlusPlus,
	Fast,
	FastPlus,
	FastPlusPlus,
	Insane,
	MAX,
};
