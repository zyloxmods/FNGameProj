#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerPowerRatingType.generated.h"

UENUM(BlueprintType)
enum class EFortPlayerPowerRatingType : uint8 {
    Auto,
    Campaign,
    Phoenix,
    Max_None,
};

