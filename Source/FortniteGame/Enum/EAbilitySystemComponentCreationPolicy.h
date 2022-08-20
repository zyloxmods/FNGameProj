#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAbilitySystemComponentCreationPolicy : uint8 
{
	Lazy,
	Always,
	EAbilitySystemComponentCreationPolicy_MAX,
};
