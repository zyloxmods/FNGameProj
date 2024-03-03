#pragma once
#include "CoreMinimal.h"
#include "ETouchInteractMode.generated.h"

UENUM(BlueprintType)
enum class ETouchInteractMode : uint8 {
    Off,
    InWorld,
    Buttons,
};

