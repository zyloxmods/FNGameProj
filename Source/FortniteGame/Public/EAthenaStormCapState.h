#pragma once
#include "CoreMinimal.h"
#include "EAthenaStormCapState.generated.h"

UENUM(BlueprintType)
enum class EAthenaStormCapState : uint8 {
    None,
    Clear,
    Warning,
    Damaging,
};

