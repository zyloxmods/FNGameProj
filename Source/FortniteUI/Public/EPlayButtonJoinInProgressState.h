#pragma once
#include "CoreMinimal.h"
#include "EPlayButtonJoinInProgressState.generated.h"

UENUM(BlueprintType)
enum class EPlayButtonJoinInProgressState : uint8 {
    None,
    JoinAsPlayer,
    SpectateAPartyMember,
};

