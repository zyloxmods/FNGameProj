#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETransformationType : uint8 
{
	Rotation,
	Scale,
	None,
	ETransformationType_MAX,
};
