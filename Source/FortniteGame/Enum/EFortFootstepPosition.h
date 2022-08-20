#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortFootstepPosition : uint8 
{
	Above,
	Below,
	AboveOrBelowAndVisible,
	Max_None,
	EFortFootstepPosition_MAX,
};
