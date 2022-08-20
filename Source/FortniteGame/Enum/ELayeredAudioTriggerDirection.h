#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ELayeredAudioTriggerDirection : uint8 
{
	Forwards,
	Sideways,
	Backwards,
	Count,
	ELayeredAudioTriggerDirection_MAX,
};
