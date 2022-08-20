#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortMissionQuestValidityResult : uint8 
{
	InvalidNotPlayable,
	ValidLinked,
	ValidObjectiveCondition,
	ValidFallback,
	EFortMissionQuestValidityResult_MAX,
};
