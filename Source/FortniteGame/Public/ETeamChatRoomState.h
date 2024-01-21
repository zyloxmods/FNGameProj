#pragma once
#include "CoreMinimal.h"
#include "ETeamChatRoomState.generated.h"

UENUM(BlueprintType)
enum class ETeamChatRoomState : uint8 {
    NotCreated,
    Creating,
    Created,
    Timeout,
};

