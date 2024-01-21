#pragma once
#include "CoreMinimal.h"
#include "ESpectatorSquadIdMode.generated.h"

UENUM(BlueprintType)
enum class ESpectatorSquadIdMode : uint8 {
    AlwaysOff,
    AlwaysOn,
    HoldToDisplay,
};

