#pragma once
#include "CoreMinimal.h"
#include "EAthenaWinCondition.generated.h"

UENUM(BlueprintType)
enum class EAthenaWinCondition : uint8 {
    LastManStanding,
    LastManStandingIncludingAllies,
    TimedTeamFinalFight,
    FirstToGoalScore,
    TimedLastMenStanding,
    MutatorControlled,
    MutatorControlledGoalScore,
    MutatorControlledChinaSupported,
};

