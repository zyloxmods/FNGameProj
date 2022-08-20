#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMatchmakingCompleteResult : uint8 
{
	UpdateNeeded,
	OutpostNotFound,
	Cancelled,
	NoResults,
	Failure,
	CreateFailure,
	Success,
	EMatchmakingCompleteResult_MAX,
};
