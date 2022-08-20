#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ELayoutRequirementStatus : uint8 
{
	Active_Invisible,
	Active_Visible,
	ELayoutRequirementStatus_MAX,
};
