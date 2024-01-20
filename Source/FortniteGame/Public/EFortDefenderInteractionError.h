#pragma once
#include "CoreMinimal.h"
#include "EFortDefenderInteractionError.generated.h"

UENUM(BlueprintType)
enum class EFortDefenderInteractionError : uint8 {
    None,
    Obstructed,
    NoEditPermission,
    UsedByAnotherPlayer,
};

