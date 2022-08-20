#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBadMatchType : uint8 
{
	Ping,
	PacketLoss,
	NotMonitored,
	EBadMatchType_MAX,
};
