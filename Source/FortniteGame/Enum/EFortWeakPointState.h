#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortWeakPointState : uint8 
{
	Inactive,
	Active,
	Destroyed,
	EFortWeakPointState_MAX,
};
