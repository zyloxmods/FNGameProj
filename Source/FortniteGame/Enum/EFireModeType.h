#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFireModeType : uint8 
{
	TapToShoot,
	FireButton,
	AutoFire,
	ForceTouch,
	Custom,
	MAX,
};
