#pragma once
#include "CoreMinimal.h"
#include "EJoinServerState.generated.h"

UENUM(BlueprintType)
enum class EJoinServerState : uint8 {
    Inactive,
    Rejoin,
    Tutorial,
    Abandon,
};

