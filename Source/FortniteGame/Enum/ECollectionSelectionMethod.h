#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ECollectionSelectionMethod : uint8 
{
	TierAsIndexOverflowToLastValid,
	Modulo,
	Random,
	None,
	ECollectionSelectionMethod_MAX,
};
