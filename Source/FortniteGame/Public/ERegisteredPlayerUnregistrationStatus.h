#pragma once
#include "CoreMinimal.h"
#include "ERegisteredPlayerUnregistrationStatus.generated.h"

UENUM(BlueprintType)
enum class ERegisteredPlayerUnregistrationStatus : uint8 {
    Registered,
    UnregistrationStarting,
    UnregistrationWaitingForInitialLock,
    UnregistrationWaitingForScoreSave,
    UnregistrationWaitingForFinalSave,
    UnregistrationWaitingForProfileUnlock,
    UnregistrationComplete,
};

