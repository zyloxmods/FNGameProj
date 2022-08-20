#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EHitTraceRule : uint8 
{
	Terrain,
	None,
	EHitTraceRule_MAX,
};
