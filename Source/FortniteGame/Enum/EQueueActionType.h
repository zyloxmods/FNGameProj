#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EQueueActionType : uint8 
{
	ZoneCleanup,
	EnvironmentActorRestoration,
	EQueueActionType_MAX,
};
