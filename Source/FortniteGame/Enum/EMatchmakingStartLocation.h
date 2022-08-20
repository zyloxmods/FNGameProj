#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMatchmakingStartLocation : uint8 
{
	Game,
	CreateNew,
	FindSingle,
	EMatchmakingStartLocation_MAX,
};
