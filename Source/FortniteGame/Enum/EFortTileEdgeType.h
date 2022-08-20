#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortTileEdgeType : uint8 
{
	Outer_2,
	Transition_3,
	Inner_4,
	Border_5,
	BorderTransitionSingle_6,
	BorderTransitionDouble_7,
	MAX,
};
