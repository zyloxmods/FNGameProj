#pragma once
#include "CoreMinimal.h"
#include "EHitTraceType.generated.h"

UENUM(BlueprintType)
enum class EHitTraceType : uint8 {
    Single,
    Multi,
};

