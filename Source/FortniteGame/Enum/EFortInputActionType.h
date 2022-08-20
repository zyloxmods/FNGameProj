#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortInputActionType : uint8 
{
	Click,
	Hold,
	Release,
	EFortInputActionType_MAX,
};
