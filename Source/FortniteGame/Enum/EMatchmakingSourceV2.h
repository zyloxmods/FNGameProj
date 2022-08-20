#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMatchmakingSourceV2 : uint8 
{
	AthenaMatchmakingWidget,
	ActivityMatchmakingWidget,
	ReadyUpScreenWidget,
	ForcedIntro,
	Unknown,
	EMatchmakingSourceV2_MAX,
};
