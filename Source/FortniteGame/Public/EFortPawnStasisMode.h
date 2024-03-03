#pragma once
#include "CoreMinimal.h"
#include "EFortPawnStasisMode.generated.h"

UENUM(BlueprintType)
enum class EFortPawnStasisMode : uint8 {
    None,
    NoMovement,
    NoMovementOrTurning,
    NoMovementOrFalling,
    NoMovement_EmotesEnabled,
    NoMovementOrTurning_EmotesEnabled,
    NoMovementOrFalling_EmotesEnabled,
};

