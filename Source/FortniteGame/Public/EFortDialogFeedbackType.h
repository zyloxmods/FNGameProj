#pragma once
#include "CoreMinimal.h"
#include "EFortDialogFeedbackType.generated.h"

UENUM(BlueprintType)
enum class EFortDialogFeedbackType : uint8 {
    FriendRequestSent,
    FriendRequestReceived,
    FriendRequestAccepted,
    Default,
};

