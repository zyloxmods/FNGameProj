#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EVideoManagerStates : uint8 
{
	LoadingReplay,
	ScrubbingReplay,
	WaitingForShotSetup,
	WatchingShot,
	ExportingShot,
	PostExportedShot,
	EVideoManagerStates_MAX,
};
