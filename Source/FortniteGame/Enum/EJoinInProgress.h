#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EJoinInProgress : uint8 
{
	JoinOnNextRound,
	JoinImmediately,
	JoinSpecificTeam,
	EJoinInProgress_MAX,
};
