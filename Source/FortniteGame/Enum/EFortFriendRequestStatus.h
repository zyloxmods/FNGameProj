#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortFriendRequestStatus : uint8 
{
	Accepted,
	PendingReceived,
	PendingSent,
	EFortFriendRequestStatus_MAX,
};
