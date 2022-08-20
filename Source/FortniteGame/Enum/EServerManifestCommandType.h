#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EServerManifestCommandType : uint8 
{
	Copy,
	Unknown,
	EServerManifestCommandType_MAX,
};
