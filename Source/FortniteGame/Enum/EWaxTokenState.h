#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EWaxTokenState : uint8 
{
	FirstSpline,
	Interpolation,
	LastSpline,
	Finished,
	EWaxTokenState_MAX,
};
