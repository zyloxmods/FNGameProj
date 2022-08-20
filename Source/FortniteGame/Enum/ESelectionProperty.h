#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESelectionProperty : uint8 
{
	MultipleObjects,
	MultipleObjectsMoveOnGrid,
	None,
	ESelectionProperty_MAX,
};
