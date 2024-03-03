#pragma once
#include "CoreMinimal.h"
#include "EOstrichDetonationState.generated.h"

UENUM(BlueprintType)
enum class EOstrichDetonationState : uint8 {
    None,
    Detonate,
    SelfDestruct,
    Instant,
};

