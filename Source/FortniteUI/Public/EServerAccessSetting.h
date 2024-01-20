#pragma once
#include "CoreMinimal.h"
#include "EServerAccessSetting.generated.h"

UENUM(BlueprintType)
enum class EServerAccessSetting : uint8 {
    Invalid,
    FriendsOfCurrentPlayers,
    LeaderInviteOnly,
};

