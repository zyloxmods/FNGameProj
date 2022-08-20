#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EChallengeBundleQuestUnlockType : uint8 
{
	GrantWithBundle,
	RequiresBattlePass,
	DaysFromEventStart,
	ChallengesCompletedToUnlock,
	BundleLevelup,
	EChallengeBundleQuestUnlockType_MAX,
};
