#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EEQSActorSpawnerStopSpawningReason : uint8 
{
	ManualStop,
	Requeued,
	RanOutOfRetries,
	EEQSActorSpawnerStopSpawningReason_MAX,
};
