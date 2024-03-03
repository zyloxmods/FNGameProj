#pragma once
#include "CoreMinimal.h"
#include "EAthenaConfirmationResult.generated.h"

UENUM(BlueprintType)
enum class EAthenaConfirmationResult : uint8 {
    Confirmed,
    Declined,
    Canceled,
    Max_NONE,
};

