#pragma once
#include "CoreMinimal.h"
#include "ESendFriendInviteFailureReason.generated.h"

UENUM(BlueprintType)
enum class ESendFriendInviteFailureReason : uint8 {
    NotFound,
    AlreadyFriends,
    InvitePending,
    AddingSelfFail,
    AddingBlockedFail,
    AutoDeclined,
    BlockedByTarget,
    InviteeInboxFull,
    SelfOutboxFull,
    UnknownError,
};

