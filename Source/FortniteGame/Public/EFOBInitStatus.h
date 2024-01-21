#pragma once
#include "CoreMinimal.h"
#include "EFOBInitStatus.generated.h"

UENUM(BlueprintType)
enum class EFOBInitStatus : uint8 {
    Successful,
    Failure_CloudStorageDisabled,
    Failure_PreviouslyInitialized,
    Failure_DataOwner,
    Failure_CloudStorageError,
    Failure_MissingFileName,
    Failure_Generic,
};

