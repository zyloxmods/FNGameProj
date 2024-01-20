#pragma once
#include "CoreMinimal.h"
#include "EFriendFeedbackType.generated.h"

UENUM(BlueprintType)
enum class EFriendFeedbackType : uint8 {
    FriendRequestSent,
    FriendRequestReceived,
    FriendRequestAccepted,
    Default,
};

