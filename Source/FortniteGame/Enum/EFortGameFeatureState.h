#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortGameFeatureState : uint8 
{
	Unavailable,
	Downloading,
	DownloadFailed,
	Available,
	Preloading,
	Preloaded,
	Loading,
	Loaded,
	Count,
	EFortGameFeatureState_MAX,
};
