#pragma once
#include "CoreMinimal.h"
#include "EEventMatchScreen.generated.h"

UENUM(BlueprintType)
enum class EEventMatchScreen : uint8 {
    None,
    ActivePlayerGrid,
    EliminatedPlayerGrid,
    MatchStatus,
    Scoreboard,
};

