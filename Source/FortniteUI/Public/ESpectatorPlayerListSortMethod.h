#pragma once
#include "CoreMinimal.h"
#include "ESpectatorPlayerListSortMethod.generated.h"

UENUM(BlueprintType)
enum class ESpectatorPlayerListSortMethod : uint8 {
    SquadId,
    PlayerName,
    Eliminations,
    EventScore,
    State,
    Count,
};

