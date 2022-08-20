#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ELinkToDirection : uint8 
{
	Down,
	Right,
	Left,
	Forward,
	Backward,
	ELinkToDirection_MAX,
};
