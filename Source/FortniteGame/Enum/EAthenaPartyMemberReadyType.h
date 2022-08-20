#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaPartyMemberReadyType : uint8 
{
	NotReady,
	Playing,
	Spectating,
	WatchingReplay,
	EAthenaPartyMemberReadyType_MAX,
};
