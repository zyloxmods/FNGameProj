#pragma once
#include "CoreMinimal.h"
#include "ECenterPopupMessageStateEnum.generated.h"

UENUM(BlueprintType)
enum class ECenterPopupMessageStateEnum : uint8 {
    NotVisible,
    WaitingForMatchDelayCountDown,
    WaitingForOutpostOwner,
    WaitingForPlayers,
};

