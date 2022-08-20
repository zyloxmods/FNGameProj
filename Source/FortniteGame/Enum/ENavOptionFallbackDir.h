#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ENavOptionFallbackDir : uint8 
{
	Right,
	Up,
	Down,
	Num,
	Invalid,
	ENavOptionFallbackDir_MAX,
};
