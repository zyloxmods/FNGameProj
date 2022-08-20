#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortSessionHelperJoinState : uint8 
{
	RequestingReservation,
	FailedReservation,
	WaitingOnGame,
	AttemptingJoin,
	JoiningSession,
	FailedJoin,
	CanceledJoin,
	EFortSessionHelperJoinState_MAX,
};
