#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESendFriendInviteFailureReason : uint8 
{
	AlreadyFriends,
	InvitePending,
	AddingSelfFail,
	AddingBlockedFail,
	AutoDeclined,
	BlockedByTarget,
	InviteeInboxFull,
	SelfOutboxFull,
	UnknownError,
	ESendFriendInviteFailureReason_MAX,
};
