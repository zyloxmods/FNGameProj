#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortLevelStreamingState : uint8 
{
	LSS_Loaded,
	LSS_UnconditionalFoundationsUpdated,
	LSS_AllFoundationsUpdated,
	LSS_NewActorsCreatedButNotUpdated,
	LSS_AllUpdated,
	LSS_Ready,
	LSS_MAX,
};
