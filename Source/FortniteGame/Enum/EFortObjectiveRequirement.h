#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortObjectiveRequirement : uint8 
{
	Required,
	RequiredButCanFail,
	EFortObjectiveRequirement_MAX,
};
