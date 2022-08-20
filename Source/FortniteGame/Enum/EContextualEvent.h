#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EContextualEvent : uint8 
{
	Location,
	InventoryAdded,
	InventoryRemoved,
	StartSkydiving,
	NewQuests,
	EContextualEvent_MAX,
};
