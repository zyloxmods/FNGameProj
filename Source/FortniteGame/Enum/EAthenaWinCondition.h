#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaWinCondition : uint8 
{
	LastManStandingIncludingAllies,
	TimedTeamFinalFight,
	FirstToGoalScore,
	TimedLastMenStanding,
	MutatorControlled,
	MutatorControlledGoalScore,
	MutatorControlledChinaSupported,
	EAthenaWinCondition_MAX,
};
