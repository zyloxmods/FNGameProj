#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortDirectedMovementSpace : uint8 
{
	ActorLocRelative,
	ActorLocRotRelative,
	CameraRelative,
	EFortDirectedMovementSpace_MAX,
};
