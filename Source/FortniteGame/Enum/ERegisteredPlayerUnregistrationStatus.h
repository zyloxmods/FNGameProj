#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ERegisteredPlayerUnregistrationStatus : uint8 
{
	UnregistrationStarting,
	UnregistrationWaitingForInitialLock,
	UnregistrationWaitingForScoreSave,
	UnregistrationWaitingForFinalSave,
	UnregistrationWaitingForProfileUnlock,
	UnregistrationComplete,
	ERegisteredPlayerUnregistrationStatus_MAX,
};
