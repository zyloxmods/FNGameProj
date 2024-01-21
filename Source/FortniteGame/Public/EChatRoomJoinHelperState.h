#pragma once
#include "CoreMinimal.h"
#include "EChatRoomJoinHelperState.generated.h"

UENUM(BlueprintType)
enum class EChatRoomJoinHelperState : uint8 {
    Ready,
    AttemptingJoin,
    Joined,
    AttemptingLeave,
};

