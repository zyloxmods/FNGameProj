#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortInputDevice : uint8 
{
	Keyboard,
	Gamepad,
	Touch,
	EFortInputDevice_MAX,
};
