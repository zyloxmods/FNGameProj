#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EEvasiveManeuverType : uint8 
{
	Dodge,
	Jump,
	JetpackStrafe,
	None,
	EEvasiveManeuverType_MAX,
};
