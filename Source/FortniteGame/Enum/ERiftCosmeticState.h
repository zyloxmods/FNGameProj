#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ERiftCosmeticState : uint8 
{
	Intro,
	Idle,
	RampUp,
	ShouldDie,
	ERiftCosmeticState_MAX,
};
