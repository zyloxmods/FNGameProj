#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EReachLocationValidationMode : uint8 
{
	Storm,
	Leash,
	SoftLeash,
	EReachLocationValidationMode_MAX,
};
