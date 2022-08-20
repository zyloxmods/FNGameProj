#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ECapturePointState : uint8 
{
	Capturing,
	Contested,
	Resetting,
	Captured,
	Reset,
	ECapturePointState_MAX,
};
