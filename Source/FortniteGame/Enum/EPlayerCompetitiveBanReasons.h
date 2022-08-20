#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPlayerCompetitiveBanReasons : uint8 
{
	Cheating,
	Collusion,
	Toxicity,
	Harassment,
	Ringing,
	Gambling,
	Exploiting,
	IntentionalDisconnect,
	IllegalRestart,
	Other,
	AccountSharing,
	CircumventingRegionLock,
	CircumventingBan,
	Smurfing,
	EPlayerCompetitiveBanReasons_MAX,
};
