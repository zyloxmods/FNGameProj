#pragma once
#include "CoreMinimal.h"
#include "EHitTraceRule.generated.h"

UENUM(BlueprintType)
enum class EHitTraceRule : uint8 {
    Visibility,
    Terrain,
    None,
};

