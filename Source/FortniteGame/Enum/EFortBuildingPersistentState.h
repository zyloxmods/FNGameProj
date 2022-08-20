#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortBuildingPersistentState : uint8 
{
	New,
	Constructed,
	Destroyed,
	Searched,
	None,
	EFortBuildingPersistentState_MAX,
};
