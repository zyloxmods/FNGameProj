#pragma once
#include "CoreMinimal.h"
#include "EFortUserCloudRequestResult.generated.h"

UENUM(BlueprintType)
enum class EFortUserCloudRequestResult : uint8 {
    Success,
    Failure_CloudStorageDisabled,
    Failure_CloudStorageError,
    Failure_FileNotFoundInUserFileList,
    Failure_SavingNotAllowedForSpecifiedUser,
};

