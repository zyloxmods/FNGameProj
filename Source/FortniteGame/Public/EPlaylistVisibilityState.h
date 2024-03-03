#pragma once
#include "CoreMinimal.h"
#include "EPlaylistVisibilityState.generated.h"

UENUM(BlueprintType)
enum class EPlaylistVisibilityState : uint8 {
    Enabled,
    Disabled,
    EnabledButInvisible,
    Hidden,
};

