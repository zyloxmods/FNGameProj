#pragma once
#include "CoreMinimal.h"
#include "EGameReadiness.generated.h"

UENUM(BlueprintType)
enum class EGameReadiness : uint8 {
    NotReady,
    Ready,
    SittingOut,
};

