#pragma once
#include "CoreMinimal.h"
#include "EShowProgressMode.generated.h"

UENUM(BlueprintType)
enum class EShowProgressMode : uint8 {
    Total,
    Remaining,
    Off,
    MAX,
};

