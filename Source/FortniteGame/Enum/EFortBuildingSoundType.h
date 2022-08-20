#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortBuildingSoundType : uint8 
{
	GenericDestruction,
	PlayerBuiltDestruction,
	None,
	EFortBuildingSoundType_MAX,
};
