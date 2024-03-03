#pragma once
#include "CoreMinimal.h"
#include "EGliderType.generated.h"

UENUM(BlueprintType)
enum class EGliderType : uint8 {
    HangGlider,
    Umbrella,
    Surfing,
    Cape,
    NoGlider,
};

