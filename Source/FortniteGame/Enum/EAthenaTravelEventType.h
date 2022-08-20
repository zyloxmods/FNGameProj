#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaTravelEventType : uint8 
{
	AirMove,
	BattleBusJump,
	LaunchJump,
	Landed,
	OpenChest,
	OpenAmmo,
	GotAssist,
	GotKnockdown,
	GotKill,
	PlayerDowned,
	PlayerDied,
	Won,
	DealtDamage,
	HealthChange,
	GotItem,
	DroppedItem,
	ShieldChange,
	WeaponExecuted,
	EnteredVehicle,
	ExitedVehicle,
	TrapBuilt,
	UsedItem,
	ZoneUpdate,
	PlacedBuilding,
	EmoteUsed,
	UpgradedBuilding,
	EditedBuilding,
	Count,
	EAthenaTravelEventType_MAX,
};
