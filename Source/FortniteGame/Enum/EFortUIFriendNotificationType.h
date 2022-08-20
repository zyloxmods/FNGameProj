#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortUIFriendNotificationType : uint8 
{
	FriendRequest,
	PartyInvite,
	AutoImportFriendSuggestion,
	PartyMemberCreated,
	EFortUIFriendNotificationType_MAX,
};
