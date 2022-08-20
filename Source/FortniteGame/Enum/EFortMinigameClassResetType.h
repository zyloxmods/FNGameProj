#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortMinigameClassResetType : uint8 
{
	RoundEnd,
	GameEnd,
	PlayerDeath,
	EFortMinigameClassResetType_MAX,
};
