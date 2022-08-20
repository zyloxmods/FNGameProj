#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCollectedVariantClientUpdate : uint8 
{
	CollectedCount,
	Improvement,
	HiddenImprovement,
	EFortCollectedVariantClientUpdate_MAX,
};
