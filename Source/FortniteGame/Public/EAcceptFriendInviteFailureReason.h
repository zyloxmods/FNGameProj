#pragma once
#include "CoreMinimal.h"
#include "EAcceptFriendInviteFailureReason.generated.h"

UENUM(BlueprintType)
enum class EAcceptFriendInviteFailureReason : uint8 {
    InviterTooManyFriends,
    SelfTooManyFriends,
    UnknownError,
};

