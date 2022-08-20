#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EDynamicFoundationType : uint8 
{
	StartEnabled_Stationary,
	StartEnabled_Dynamic,
	StartDisabled,
	EDynamicFoundationType_MAX,
};
