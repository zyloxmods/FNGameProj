#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBuildingAnim : uint8 
{
	EBA_Building,
	EBA_Breaking,
	EBA_Destruction,
	EBA_Placement,
	EBA_DynamicLOD,
	EBA_DynamicShrink,
	EBA_MAX,
};
