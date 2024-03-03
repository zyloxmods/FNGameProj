#pragma once
#include "CoreMinimal.h"
#include "EFortFriendRequestStatus.generated.h"

UENUM(BlueprintType)
enum class EFortFriendRequestStatus : uint8 {
    None,
    Accepted,
    PendingReceived,
    PendingSent,
};

