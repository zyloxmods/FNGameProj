#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBuildingMode : uint8 
{
	BuildingsOnly,
	TrapsOnly,
	All,
	EBuildingMode_MAX,
};
