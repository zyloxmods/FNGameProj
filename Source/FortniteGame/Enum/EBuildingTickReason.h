#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBuildingTickReason : uint8 
{
	Damaged,
	GameplayCue_Damage,
	GameplayCue_Healing,
	GameplayCue_InstantDeath,
	UnderConstruction,
	UnderRepair,
	Editing,
	BuildingAnimation,
	DynamicLODAnim,
	DynamicShrinkAnim,
	AutoBuild,
	FullHealthEffect,
	BounceAnimation,
	DoorOpenStyleChanged,
	DoorOpenChanged,
	DoorInteract,
	EBuildingTickReason_MAX,
};
