#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAreaFlag : uint8 
{
	Obstacle,
	Smashable,
	Unwalkable,
	Interactable,
	EFortAreaFlag_MAX,
};
