#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortOptionGenerationResult : uint8 
{
	NewOptionsGenerated,
	ExistingOptionsGenerated,
	EFortOptionGenerationResult_MAX,
};
