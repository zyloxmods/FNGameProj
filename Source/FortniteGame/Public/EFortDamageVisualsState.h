#pragma once
#include "CoreMinimal.h"
#include "EFortDamageVisualsState.generated.h"

UENUM(BlueprintType)
enum class EFortDamageVisualsState : uint8 {
    UnDamaged,
    DamagedAndAnimating,
    DamagedAndStatic,
};

