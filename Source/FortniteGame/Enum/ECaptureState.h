#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ECaptureState : uint8 
{
	Capturing,
	Contested,
	Disabled,
	Decapturing,
	Neutralizing,
	Deneutralizing,
	Captured,
	ECaptureState_MAX,
};
