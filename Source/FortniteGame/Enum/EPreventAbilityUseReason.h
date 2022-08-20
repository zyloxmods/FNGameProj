#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPreventAbilityUseReason : uint8 
{
	AlreadyActive,
	AbilityActivationBlocked,
	None,
	Count,
	EPreventAbilityUseReason_MAX,
};
