#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ECameraStateRestoreReason : uint8 
{
	ChangedFollowTarget,
	ChangedCameraType,
	InvokedHotKey,
	Scrubbed,
	Restored,
	SpecialAction,
	MAX,
};
