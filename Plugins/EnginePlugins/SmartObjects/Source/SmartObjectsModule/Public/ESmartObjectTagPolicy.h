#pragma once
#include "CoreMinimal.h"
#include "ESmartObjectTagPolicy.generated.h"

UENUM(BlueprintType)
enum class ESmartObjectTagPolicy : uint8 {
    Any,
    All,
    MAX,
};

