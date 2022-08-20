#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBacchusHUDStateType : uint8 
{
	Hide,
	Show,
	FallbackToDefault,
	EBacchusHUDStateType_MAX,
};
