#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortFactorContributionType : uint8 
{
	CurrentValue_Inverse,
	AverageValue_Direct,
	AverageValue_Inverse,
	EFortFactorContributionType_MAX,
};
