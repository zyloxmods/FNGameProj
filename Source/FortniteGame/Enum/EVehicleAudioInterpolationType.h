#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EVehicleAudioInterpolationType : uint8 
{
	CustomCurve,
	Linear,
	EVehicleAudioInterpolationType_MAX,
};
