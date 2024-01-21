#pragma once
#include "CoreMinimal.h"
#include "EFortMissionVisibilityOverride.generated.h"

UENUM(BlueprintType)
enum class EFortMissionVisibilityOverride : uint8 {
    Visible,
    Invisible,
    Max_None,
};

