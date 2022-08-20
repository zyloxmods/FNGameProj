#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMinigamePlayerPersistence : uint8 
{
	PartyLeaderOnly,
	AllPlayers,
	EMinigamePlayerPersistence_MAX,
};
