#pragma once
#include "CoreMinimal.h"
#include "EFortCombatThresholds.generated.h"

UENUM(BlueprintType)
enum class EFortCombatThresholds : uint8{
        Low,
        Medium,
        High,
        Extreme,
        Max_None,
    };


