#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortDamageVisualsState : uint8 
{
	DamagedAndAnimating,
	DamagedAndStatic,
	EFortDamageVisualsState_MAX,
};
