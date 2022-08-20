#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ERichPresenceStateChange : uint8 
{
	Idle,
	Active,
	Busy,
	NotBusy,
	ERichPresenceStateChange_MAX,
};
