#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortVoteType : uint8 
{
	DifficultyIncrease,
	MissionActivation,
	ContinueOrExtract,
	EFortVoteType_MAX,
};
