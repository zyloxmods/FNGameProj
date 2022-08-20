#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EUseInputWithPartyResult : uint8 
{
	LocalPlayerNeedsToAllowCrossplay,
	LocalPlayerRestricted,
	RemotePlayerRestricted,
	UnknownFailure,
	EUseInputWithPartyResult_MAX,
};
