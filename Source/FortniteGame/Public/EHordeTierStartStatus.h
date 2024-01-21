#pragma once
#include "CoreMinimal.h"
#include "EHordeTierStartStatus.generated.h"

UENUM(BlueprintType)
enum class EHordeTierStartStatus : uint8 {
    ReadyToStart,
    WaitingForPlayer,
    WaitingForDBM,
    GenericNotReadyToStart,
};

