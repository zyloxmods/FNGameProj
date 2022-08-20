#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortItemCollectorState : uint8 
{
	Active,
	Inactive,
	Captured,
	Invalid,
	EFortItemCollectorState_MAX,
};
