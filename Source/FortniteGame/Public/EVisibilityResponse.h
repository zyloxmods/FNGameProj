#pragma once
#include "CoreMinimal.h"
#include "EVisibilityResponse.generated.h"

UENUM(BlueprintType)
enum class EVisibilityResponse : uint8 {
    Hide,
    Show,
    Custom,
};

