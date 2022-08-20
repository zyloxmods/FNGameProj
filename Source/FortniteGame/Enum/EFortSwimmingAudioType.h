#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortSwimmingAudioType : uint8 
{
	Sprint,
	SprintStart,
	PickaxeSwing,
	NormalDBNO,
	SprintBoostStart,
	SwimStart,
	SwimEnd,
	Max_None,
	EFortSwimmingAudioType_MAX,
};
