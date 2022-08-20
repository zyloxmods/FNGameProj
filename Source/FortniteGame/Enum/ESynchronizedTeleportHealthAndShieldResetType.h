#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESynchronizedTeleportHealthAndShieldResetType : uint8 
{
	EvaluateHealthAndShieldMutators,
	MaxHealth,
	ESynchronizedTeleportHealthAndShieldResetType_MAX,
};
