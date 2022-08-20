#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAssetChangeMethod : uint8 
{
	Minimum,
	OnlyAddNew,
	BelowDoubleTheFixedCost,
	EAssetChangeMethod_MAX,
};
