#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCompare : uint8 
{
	EFC_LessThanOrEqual,
	EFC_GreaterThan,
	EFC_GreaterThanOrEqual,
	EFC_Equals,
	EFC_MAX,
};
