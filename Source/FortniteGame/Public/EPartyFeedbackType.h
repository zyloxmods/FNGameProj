#pragma once
#include "CoreMinimal.h"
#include "EPartyFeedbackType.generated.h"

UENUM(BlueprintType)
enum class EPartyFeedbackType : uint8 {
    PartyInProgressPlayerJoined,
    PartyInProgressPlayerLeft,
    Default,
};

