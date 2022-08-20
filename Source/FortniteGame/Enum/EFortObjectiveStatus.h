#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortObjectiveStatus : uint8 
{
	InProgress,
	Succeeded,
	Failed,
	NeutralCompletion,
	Max_None,
	EFortObjectiveStatus_MAX,
};
