#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAILODLevel : uint8 
{
	MIN,
	Dormant,
	BelowLower,
	Lower,
	AboveLower,
	BelowNormal,
	Normal,
	AboveNormal,
	MAX,
};
