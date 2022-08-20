#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCollectedState : uint8 
{
	New,
	Known,
	NewlyCollected,
	Collected,
	NewBest,
	NewRecord,
	NewLocation,
	NewlyCompleted,
	Complete,
	EFortCollectedState_MAX,
};
