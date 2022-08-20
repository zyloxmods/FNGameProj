#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortInvalidActivityReason : uint8 
{
	PartyTooBig,
	PartyTooSmall,
	NotPartyLeader,
	MatchmakingAlready,
	InvalidData,
	EFortInvalidActivityReason_MAX,
};
