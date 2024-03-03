#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingStartLocation.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingStartLocation : uint8 {
    Lobby,
    Game,
    CreateNew,
    FindSingle,
};

