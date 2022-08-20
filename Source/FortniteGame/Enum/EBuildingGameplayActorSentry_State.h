#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBuildingGameplayActorSentry_State : uint8 
{
	ActiveIdle,
	Tracking,
	Aggro,
	Dormant,
	Deactivated,
	ReturningToIdle,
	LocatingDamager,
	EBuildingGameplayActorSentry_MAX,
};
