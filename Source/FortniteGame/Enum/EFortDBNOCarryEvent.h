#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortDBNOCarryEvent : uint8 
{
	Interrogating,
	Dropped,
	Thrown,
	EFortDBNOCarryEvent_MAX,
};
