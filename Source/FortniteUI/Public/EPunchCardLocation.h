#pragma once
#include "CoreMinimal.h"
#include "EPunchCardLocation.generated.h"

UENUM(BlueprintType)
enum class EPunchCardLocation : uint8 {
    NONE,
    HUD,
    Map,
    EndGame,
    Lobby,
};

