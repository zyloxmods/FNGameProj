#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMatchmakingState : uint8 
{
	CancelingMatchmaking,
	ReleasingLock,
	AcquiringLock,
	LockAcquistionFailure,
	FindingEmptyServer,
	FindingExistingSession,
	TestingEmptyServers,
	TestingExistingSessions,
	JoiningExistingSession,
	NoMatchesAvailable,
	CleaningUpExisting,
	HandlingFailure,
	JoinSuccess,
	EMatchmakingState_MAX,
};
