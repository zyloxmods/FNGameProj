#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EJoinServerState : uint8 
{
	Rejoin,
	Tutorial,
	Abandon,
	EJoinServerState_MAX,
};
