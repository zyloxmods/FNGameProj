#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortControlRecoveryBehavior : uint8 
{
	LimitedControl,
	ChainControl,
	EFortControlRecoveryBehavior_MAX,
};
