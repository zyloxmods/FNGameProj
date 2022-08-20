#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EHudVisibilityState : uint8 
{
	FullyHidden,
	GameOnly,
	ReplayOnly,
	MAX,
};
