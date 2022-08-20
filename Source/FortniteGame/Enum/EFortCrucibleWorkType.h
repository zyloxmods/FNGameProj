#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCrucibleWorkType : uint8 
{
	SetupPlayer,
	GetFriendsList,
	GetFriendsStats,
	GetGlobalLeaderboard,
	GetDisplayNames,
	EFortCrucibleWorkType_MAX,
};
