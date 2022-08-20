#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBounceCompressionState : uint8 
{
	Crouching,
	Crouched,
	Jumping,
	Recoiling,
	EBounceCompressionState_MAX,
};
