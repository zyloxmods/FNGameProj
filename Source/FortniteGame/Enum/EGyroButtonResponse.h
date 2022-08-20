#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EGyroButtonResponse : uint8 
{
	Disable,
	Trackball,
	Invert,
	EGyroButtonResponse_MAX,
};
