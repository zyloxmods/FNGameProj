#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESquadSlotType : uint8 
{
	SurvivorSquadLeadSurvivor,
	SurvivorSquadSurvivor,
	DefenderSquadMember,
	ExpeditionSquadMember,
	ESquadSlotType_MAX,
};
