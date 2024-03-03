#pragma once
#include "CoreMinimal.h"
#include "EContentInstallState.generated.h"

UENUM(BlueprintType)
enum class EContentInstallState : uint8 {
    NotInstalled,
    Pending,
    Installed,
    Unknown,
    Error,
};

