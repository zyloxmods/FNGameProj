#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortContributionGraphElements : uint8 
{
	IntegralLine,
	TotalLine,
	PendingLine,
	ActionLine,
	Max_None,
	EFortContributionGraphElements_MAX,
};
