#pragma once
#include "CoreMinimal.h"
#include "EFortStatType.generated.h"

UENUM(BlueprintType)
enum class EFortStatType : uint8 {
    Fortitude,
    Offense,
    Resistance,
    Technology,
    Fortitude_Team,
    Offense_Team,
    Resistance_Team,
    Technology_Team,
    Invalid,
};

