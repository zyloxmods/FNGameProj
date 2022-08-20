#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPegasusTimelineCategories : uint8 
{
	Player,
	Combat,
	Building,
	Inventory,
	Social,
	Resources,
	EPegasusTimelineCategories_MAX,
};
