#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortItemViewRotationMode : uint8 
{
	BoundsPivot,
	World,
	Relative,
	EFortItemViewRotationMode_MAX,
};
