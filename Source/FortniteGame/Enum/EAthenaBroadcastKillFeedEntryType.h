#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaBroadcastKillFeedEntryType : uint8 
{
	Storm,
	FallDamage,
	Explosion,
	DBNO,
	EAthenaBroadcastKillFeedEntryType_MAX,
};
