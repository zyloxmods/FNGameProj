#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAuxIndicatorStates : uint8 
{
	AIS_ConfirmedArrow,
	AIS_Inactive,
	AIS_Active,
	AIS_MAX,
};
