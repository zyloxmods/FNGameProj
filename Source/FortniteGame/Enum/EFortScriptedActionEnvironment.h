#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortScriptedActionEnvironment : uint8 
{
	GameServer,
	GameClient,
	Max_None,
	EFortScriptedActionEnvironment_MAX,
};
