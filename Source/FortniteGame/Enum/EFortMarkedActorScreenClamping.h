#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortMarkedActorScreenClamping : uint8 
{
	Clamp,
	ClampWhileNew,
	DontClamp,
	EFortMarkedActorScreenClamping_MAX,
};
