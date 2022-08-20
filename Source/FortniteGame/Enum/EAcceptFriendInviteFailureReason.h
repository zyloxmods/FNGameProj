#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAcceptFriendInviteFailureReason : uint8 
{
	SelfTooManyFriends,
	UnknownError,
	EAcceptFriendInviteFailureReason_MAX,
};
