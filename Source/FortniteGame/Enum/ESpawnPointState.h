#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESpawnPointState : uint8 
{
	Active_CarryObjectInRange,
	Active_CarryObjectOutOfRange,
	IntelCaptured,
	IntelDownloaded,
	ESpawnPointState_MAX,
};
