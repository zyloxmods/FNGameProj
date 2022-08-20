#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ECoastState : uint8 
{
	Mount,
	Coasting,
	Pedaling,
	PreDismount,
	Dismount,
	EndCoast,
	ECoastState_MAX,
};
