#pragma once
#include "CoreMinimal.h"
#include "EFortUIFriendNotificationType.generated.h"

UENUM(BlueprintType)
enum class EFortUIFriendNotificationType : uint8 {
    Default,
    FriendRequest,
    PartyInvite,
    AutoImportFriendSuggestion,
    PartyMemberCreated,
};

