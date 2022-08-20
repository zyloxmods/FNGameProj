#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortGameplayCueSourceCondition : uint8 
{
	LocalPlayerSource,
	NonLocalPlayerSource,
	EFortGameplayCueSourceCondition_MAX,
};
