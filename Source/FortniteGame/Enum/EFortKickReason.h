#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortKickReason : uint8 
{
	GenericKick,
	WasBanned,
	EncryptionRequired,
	CrossPlayRestriction,
	ClientIdRestriction,
	EFortKickReason_MAX,
};
