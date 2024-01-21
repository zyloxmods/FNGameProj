#pragma once
#include "CoreMinimal.h"
#include "EFortShowdownEventState.generated.h"

UENUM(BlueprintType)
enum class EFortShowdownEventState : uint8 {
    Unknown,
    FutureTBD,
    FutureScheduled,
    FutureNext,
    Live,
    LiveParticipating,
    LiveNotParticipating,
    Completed,
    CompletedParticipated,
    CompletedNotPartipated,
    Cancelled,
};

