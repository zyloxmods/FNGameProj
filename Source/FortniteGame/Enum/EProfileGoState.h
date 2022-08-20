#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EProfileGoState : uint8 
{
	SettlingLocation,
	RunningCommands,
	CompletedScenario,
	Summary,
	Completed,
	EProfileGoState_MAX,
};
