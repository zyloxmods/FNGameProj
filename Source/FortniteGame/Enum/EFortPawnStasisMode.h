#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPawnStasisMode : uint8 
{
	NoMovement,
	NoMovementOrTurning,
	NoMovementOrFalling,
	NoMovement_EmotesEnabled,
	NoMovementOrTurning_EmotesEnabled,
	NoMovementOrFalling_EmotesEnabled,
	EFortPawnStasisMode_MAX,
};
