#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EReadyCheckState : uint8 
{
	Ready,
	NotReady,
	EReadyCheckState_MAX,
};
