#pragma once
#include "CoreMinimal.h"
#include "ERespawnUIState.generated.h"

UENUM(BlueprintType)
enum class ERespawnUIState : uint8 {
    Hidden,
    ShowRespawnEnabled,
    ShowRespawnDisabled,
};

