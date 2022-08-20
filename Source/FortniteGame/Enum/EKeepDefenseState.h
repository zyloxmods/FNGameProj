#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EKeepDefenseState : uint8 
{
	Warmup,
	Defense,
	LastAlive,
	Max,
};
