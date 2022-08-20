#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESkydiveFeedbackPhase : uint8 
{
	WithGlider,
	InVortex,
	None,
	ESkydiveFeedbackPhase_MAX,
};
