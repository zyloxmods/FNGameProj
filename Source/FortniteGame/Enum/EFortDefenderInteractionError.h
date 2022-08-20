#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortDefenderInteractionError : uint8 
{
	Obstructed,
	NoEditPermission,
	UsedByAnotherPlayer,
	EFortDefenderInteractionError_MAX,
};
