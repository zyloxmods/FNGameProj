#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortBuildingType : uint8 
{
	Floor,
	Corner,
	Deco,
	Prop,
	Stairs,
	Roof,
	Pillar,
	SpawnedItem,
	Container,
	Trap,
	GenericCenterCellActor,
	None,
	EFortBuildingType_MAX,
};
