#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPlayEventType : uint8 
{
	TeamFlight,
	Zone,
	Elimination,
	PlayerMoves,
	SinglePlayerMove,
	ActorsPosition,
	GameHighlights,
	Timecode,
	EPlayEventType_MAX,
};
