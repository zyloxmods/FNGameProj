#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortChallengeBundleInfoLockedReasonCode : uint8 
{
	NoKnownUnlockMethod,
	PurchaseTheBattlePass,
	ReachSpecificTier,
	TimeLeftBeforeUnlock,
	EFortChallengeBundleInfoLockedReasonCode_MAX,
};
