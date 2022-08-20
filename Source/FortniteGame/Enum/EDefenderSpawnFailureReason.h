#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EDefenderSpawnFailureReason : uint8 
{
	AllPlayerSlotsFull,
	DefendersNotUnlocked,
	CurrentlySimulatingDefender,
	NotOutpostOwner,
	EDefenderSpawnFailureReason_MAX,
};
