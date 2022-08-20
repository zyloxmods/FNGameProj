#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EEventMatchScreen : uint8 
{
	ActivePlayerGrid,
	EliminatedPlayerGrid,
	MatchStatus,
	Scoreboard,
	EEventMatchScreen_MAX,
};
