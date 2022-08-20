#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortWeaponListRemovalBehavior : uint8 
{
	DeferredLifespan,
	DoNotDestroy,
	EFortWeaponListRemovalBehavior_MAX,
};
