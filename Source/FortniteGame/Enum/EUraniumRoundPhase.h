#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EUraniumRoundPhase : uint8 
{
	EndOfRoundStart,
	ShowRoundEnd,
	HideRoundEnd,
	FadeOut,
	SetupForNextRound,
	ShowRoundIntro,
	ShowPOICamera,
	PerkSelect,
	RoundActive,
	FadeIn,
	EndOfRoundFinish,
	FadeBeforeReleasePlayerIntoGameplay,
	ReleasePlayersIntoGameplay,
	EndGame,
	MAX,
};
