#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPartyState : uint8 
{
	WorldView,
	TheaterView,
	Matchmaking,
	PostMatchmaking,
	ReturningToFrontEnd,
	BattleRoyaleView,
	BattleRoyalePreloading,
	BattleRoyaleMatchmaking,
	BattleRoyalePostMatchmaking,
	EFortPartyState_MAX,
};
