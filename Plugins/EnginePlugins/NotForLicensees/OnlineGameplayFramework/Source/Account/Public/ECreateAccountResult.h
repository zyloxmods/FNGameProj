#pragma once
#include "CoreMinimal.h"
#include "ECreateAccountResult.generated.h"

UENUM(BlueprintType)
enum class ECreateAccountResult : uint8 {
    NotStarted,
    Pending,
    Success,
    Console_LoginFailed,
    Console_DuplicateAuthAssociation,
    DuplicateAccount,
    GenericError,
};

