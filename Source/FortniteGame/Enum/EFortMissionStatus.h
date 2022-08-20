#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortMissionStatus : uint8 
{
	InProgress,
	Succeeded,
	Failed,
	NeutralCompletion,
	Quit,
	Max_None,
	EFortMissionStatus_MAX,
};
