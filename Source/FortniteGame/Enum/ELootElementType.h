#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ELootElementType : uint8 
{
	Chest,
	SupplyDrop,
	Invalid,
	ELootElementType_MAX,
};
