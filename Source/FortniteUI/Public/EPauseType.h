#pragma once
#include "CoreMinimal.h"
#include "EPauseType.generated.h"

UENUM(BlueprintType)
enum class EPauseType : uint8 {
    NoPause,
    Rare,
    New,
    NewAndRare,
};

