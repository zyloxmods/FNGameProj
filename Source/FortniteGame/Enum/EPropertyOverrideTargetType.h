#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPropertyOverrideTargetType : uint8 
{
	Default,
	ImmutableTarget,
	EPropertyOverrideTargetType_MAX,
};
