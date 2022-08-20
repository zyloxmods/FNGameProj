#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EStashInventoryServiceSyncState : uint8 
{
	Syncing,
	Ready,
	EStashInventoryServiceSyncState_MAX,
};
