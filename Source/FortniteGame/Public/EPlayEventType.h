#pragma once
#include "CoreMinimal.h"
#include "EPlayEventType.generated.h"

UENUM()
enum class EPlayEventType : int32 {
    None,
    TeamFlight,
    Zone,
    Elimination,
    PlayerMoves,
    SinglePlayerMove,
    ActorsPosition,
    GameHighlights,
    Timecode,
};

