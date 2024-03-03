#pragma once
#include "CoreMinimal.h"
#include "EFortDialogResult.generated.h"

UENUM(BlueprintType)
enum class EFortDialogResult : uint8 {
    Confirmed,
    Declined,
    Ignored,
    Killed,
    TimedOut,
    Unknown,
};

