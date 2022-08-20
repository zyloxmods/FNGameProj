#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETrackedObjectiveQuery : uint8 
{
	ExactTeam,
	Friendly,
	Neutral,
	Hostile,
	NotFriendly,
	MAX,
};
