#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortServerGameMode : uint8 
{
	LobbyPvE,
	LobbyPvP,
	ZonePvP,
	ZonePvE,
	EFortServerGameMode_MAX,
};
