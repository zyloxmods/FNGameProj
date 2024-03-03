#pragma once
#include "CoreMinimal.h"
#include "ESaveLocation.generated.h"

UENUM(BlueprintType)
enum class ESaveLocation : uint8 {
    Local_ForDevice,
    Local_MAX UMETA(Hidden),
};

