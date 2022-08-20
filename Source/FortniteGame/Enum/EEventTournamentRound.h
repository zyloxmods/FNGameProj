#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EEventTournamentRound : uint8 
{
	Qualifiers,
	SemiFinals,
	Finals,
	Unknown,
	Arena,
	EEventTournamentRound_MAX,
};
