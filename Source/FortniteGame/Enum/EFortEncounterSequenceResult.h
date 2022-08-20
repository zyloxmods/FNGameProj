#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortEncounterSequenceResult : uint8 
{
	FailedEncounterInProgress,
	Failed,
	EFortEncounterSequenceResult_MAX,
};
