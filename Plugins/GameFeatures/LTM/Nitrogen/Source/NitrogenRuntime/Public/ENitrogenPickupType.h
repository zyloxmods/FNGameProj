#pragma once
#include "CoreMinimal.h"
#include "ENitrogenPickupType.generated.h"

UENUM(BlueprintType)
enum class ENitrogenPickupType : uint8 {
    None,
    Cashbag,
    MAX,
};

