#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ELayeredAudioInterpolationType : uint8 
{
	CustomCurve,
	Linear,
	ELayeredAudioInterpolationType_MAX,
};
