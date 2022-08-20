#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortQuickTimeEventResult : uint8 
{
	Miss,
	Good,
	Great,
	Perfect,
	EFortQuickTimeEventResult_MAX,
};
