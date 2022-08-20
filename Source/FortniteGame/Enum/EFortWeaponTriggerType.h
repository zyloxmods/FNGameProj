#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortWeaponTriggerType : uint8 
{
	Automatic,
	OnRelease,
	OnPressAndRelease,
	EFortWeaponTriggerType_MAX,
};
