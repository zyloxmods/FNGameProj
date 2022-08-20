#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBuildingDamageTeamFilter : uint8 
{
	OwnerOnly,
	TeamOnly,
	EnemyOnly,
	EnemyAndOwnerOnly,
	None,
	EBuildingDamageTeamFilter_MAX,
};
