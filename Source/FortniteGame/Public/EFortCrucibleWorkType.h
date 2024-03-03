#pragma once
#include "CoreMinimal.h"
#include "EFortCrucibleWorkType.generated.h"

UENUM(BlueprintType)
enum class EFortCrucibleWorkType : uint8 {
    Invalid,
    SetupPlayer,
    GetFriendsList,
    GetFriendsStats,
    GetGlobalLeaderboard,
    GetDisplayNames,
};

