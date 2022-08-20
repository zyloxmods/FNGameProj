#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ERatingsEnforcementType : uint8 
{
	IgnoreMaximums,
	IgnoreParty,
	IgnorePartyMaximum,
	ERatingsEnforcementType_MAX,
};
