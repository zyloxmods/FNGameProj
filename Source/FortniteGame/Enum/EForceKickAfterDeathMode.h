#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EForceKickAfterDeathMode : uint8 
{
	KickAll,
	KickPrivate,
	EForceKickAfterDeathMode_MAX,
};
