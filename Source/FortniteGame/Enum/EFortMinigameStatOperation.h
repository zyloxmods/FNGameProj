#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortMinigameStatOperation : uint8 
{
	Less,
	Greater,
	LessOrEqual,
	GreaterOrEqual,
	EFortMinigameStatOperation_MAX,
};
