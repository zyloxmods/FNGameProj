#pragma once
#include "CoreMinimal.h"
#include "ERespawnAndSpectateClientEventId.generated.h"

UENUM(BlueprintType)
enum class ERespawnAndSpectateClientEventId : uint8 {
    ShowUI,
    HideUI,
    ShowRespawnAvailableUI,
    MAX,
};

