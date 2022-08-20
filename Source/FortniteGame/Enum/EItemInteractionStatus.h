#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EItemInteractionStatus : uint8 
{
	Completed,
	TimedOut,
	EItemInteractionStatus_MAX,
};
