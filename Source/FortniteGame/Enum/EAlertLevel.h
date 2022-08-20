#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAlertLevel : uint8 
{
	Alerted,
	LKP,
	Threatened,
	Count,
	EAlertLevel_MAX,
};
