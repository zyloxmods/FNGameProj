#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EIslandInspectorState : uint8 
{
	Ready,
	AwaitingProcessCommand,
	ProcessingCommand,
	EIslandInspectorState_MAX,
};
