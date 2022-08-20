#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMatchmakingFlags : uint8 
{
	CreateNewOnly,
	NoReservation,
	Private,
	UseWorldDataOwner,
	EMatchmakingFlags_MAX,
};
