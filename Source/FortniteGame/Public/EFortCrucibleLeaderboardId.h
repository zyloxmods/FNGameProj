#pragma once
#include "CoreMinimal.h"
#include "EFortCrucibleLeaderboardId.generated.h"

UENUM(BlueprintType)
enum class EFortCrucibleLeaderboardId : uint8 {
    GlobalGamepad,
    GlobalKBM,
    GlobalTouch,
    GlobalAll,
    FriendsGamepad,
    FriendsKBM,
    FriendsTouch,
    FriendsAll,
    Count,
};

