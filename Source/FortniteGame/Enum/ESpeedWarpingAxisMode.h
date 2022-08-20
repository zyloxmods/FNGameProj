#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESpeedWarpingAxisMode : uint8 
{
	IKFootRootLocalY,
	IKFootRootLocalZ,
	WorldSpaceVectorInput,
	ComponentSpaceVectorInput,
	ActorSpaceVectorInput,
	ESpeedWarpingAxisMode_MAX,
};
