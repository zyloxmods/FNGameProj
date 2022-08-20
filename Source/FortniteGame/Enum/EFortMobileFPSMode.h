#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortMobileFPSMode : uint8 
{
	Mode_30Fps,
	Mode_45Fps,
	Mode_60Fps,
	Mode_90Fps,
	Mode_120Fps,
	Num,
	EFortMobileFPSMode_MAX,
};
