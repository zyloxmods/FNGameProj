#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortInputFilterLevel : uint8 
{
	Touch,
	Gamepad,
	Mouse,
	EFortInputFilterLevel_MAX,
};
