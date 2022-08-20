#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ELayoutDataType : uint8 
{
	DefaultToolLayout,
	DefaultGameLayout,
	MAX_Local,
	CustomCloudLayout,
	ELayoutDataType_MAX,
};
