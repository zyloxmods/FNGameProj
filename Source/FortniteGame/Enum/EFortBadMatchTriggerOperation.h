#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortBadMatchTriggerOperation : uint8 
{
	LessThanOrEqual,
	Equal,
	GreaterThan,
	GreaterThanOrEqual,
	EFortBadMatchTriggerOperation_MAX,
};
