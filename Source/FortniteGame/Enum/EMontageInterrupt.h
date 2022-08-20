#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMontageInterrupt : uint8 
{
	RootMotionOnly,
	None,
	EMontageInterrupt_MAX,
};
