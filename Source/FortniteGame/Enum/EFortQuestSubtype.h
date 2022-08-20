#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortQuestSubtype : uint8 
{
	WeeklyChallenge,
	PunchCard,
	QuickChallenge,
	Milestone,
	UrgentQuest,
	EFortQuestSubtype_MAX,
};
