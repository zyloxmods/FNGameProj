#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaStormCapState : uint8 
{
	Clear,
	Warning,
	Damaging,
	EAthenaStormCapState_MAX,
};
