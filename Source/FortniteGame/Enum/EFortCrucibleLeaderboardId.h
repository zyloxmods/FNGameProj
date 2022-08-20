#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCrucibleLeaderboardId : uint8 
{
	GlobalKBM,
	GlobalTouch,
	GlobalAll,
	FriendsGamepad,
	FriendsKBM,
	FriendsTouch,
	FriendsAll,
	Count,
	EFortCrucibleLeaderboardId_MAX,
};
