#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortReplayEventType : uint8 
{
	Eliminated,
	DBNO,
	UserPlaced,
	MAX,
};
