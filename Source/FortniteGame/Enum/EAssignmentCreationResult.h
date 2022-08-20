#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAssignmentCreationResult : uint8 
{
	AssignmentCreated,
	AssignmentFound,
	EAssignmentCreationResult_MAX,
};
