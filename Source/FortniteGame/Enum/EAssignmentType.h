#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAssignmentType : uint8 
{
	Encounter,
	World,
	Enemy,
	NumAssignmentTypes,
	EAssignmentType_MAX,
};
