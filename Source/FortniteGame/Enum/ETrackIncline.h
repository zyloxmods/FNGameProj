#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETrackIncline : uint8 
{
	Flat,
	Up,
	Down,
	GradualUp,
	GradualDown,
	Max_None,
	ETrackIncline_MAX,
};
